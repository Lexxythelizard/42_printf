/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenivorb <lenivorb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 18:39:28 by lenivorb          #+#    #+#             */
/*   Updated: 2026/06/27 13:51:10 by lenivorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// --- icludes ---

#include "../ft_printf.h"
#include "../core/ft_printf_core.h"

// --- DOC ---

/*
	... your comment here ...
*/

// --- define ---

int	ft_printf(const char *passed_line, ...)
{
	va_list	args;
	int		wrt;
	t_flags	*flags;

	flags = init_flags();
	va_start(args, passed_line);
	while (*passed_line)
	{
		if (is_percent(*passed_line))
			wrt = process_specifier(flags, &args);
		else
			wrt = lxy_put_char(*passed_line);
		if (wrt < 0)
			return (-1);
	}
	return (0);
}

int	process_flagg(t_flags *flags, const char *line)
{
	int	i;
	int	wrt;
	int	len;

	i = 1;
	len = 0;
	while ((line[i]) && (is_flag(line[i])))
	{
		flags -> hash += (line[i] == 35);
		flags -> wsp += (line[i] == 32);
		flags -> plus += (line[i] == 43);
		i++;
	}
	if ((is_specifier(line[i])))
		return (0);
	i = 0;
	while (line[i]) && (is_flag(line[i]))
	{
		wrt = lxy_put_char(line[i]);
		if (wrt < 0)
			return (-1);
		len += wrt;
		i++;
	}
	return (len);
}

int	process_specifier(t_flags *flags, va_list *args, const char *line)
{
	char	*ptr;
	int		wrt;
	int		len;
	int		move;

	ptr = (char *)(line);
	wrt = process_flagg(ptr, flags);
	if (wrt < 0)
		return (-1);
	len += wrt;
	move = flags -> hash + flags -> wsp + flags -> plus + 1;
	ptr += move;
	wrt = call_put_func(ptr, args);
	if (wrt < 0)
		return (-1);
	courser += ((is_specifier(*ptr)) + move);
		
	if ()
}

int	call_put_func(const char *spec, va_list *args)
{
	if ((is_equal(spec, "lu", 2)) || 
		(is_equal(spec, "xl", 2)) || (is_equal(spec, "Xl", 2)))
		return ((*get_unsigned_long_func(spec))(va_arg(*args, unsigned long)));
	else if ((is_equal(spec, "zu", 2)) || (is_equal(spec, "xz", 2)) || 
		(is_equal(spec, "Xz", 2)))
		return ((*get_size_t_func(spec))(va_arg(*args, size_t)));
	else if (*spec == 'c')
		return ((*get_char_func(spec))(va_arg(*args, char)));
	else if (*spec == 's')
		return ((*get_string_func(spec))(va_arg(*args, char)));
	else if (*spec == '%')
		return (lxy_put_percent());
	else if ((*spec == 'i') && (*spec == 'd'))
		return ((*get_signed_int_func(spec))(va_arg(*args, int)));
	else if ((*spec == 'u') || (*spec == 'x') || (*spec == 'X'))
		return ((*get_unsigned_int_func(spec))(va_arg(*args, unsigned int)));
	else if (lxy_compare(spec, "l"))
		return ((*get_long_func(spec))(va_arg(*args, long)));
	else if (lxy_compare(spec, "z"))
		return ((*get_ssize_t_func(spec))(va_arg(*args, ssize_t)));
	else if (*spec == 'p')
		return (lxy_put_pointer(va_args(*args, void *)));
	else
		return (0);
}
