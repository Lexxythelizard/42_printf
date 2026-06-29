/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_call_put_layer_0.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenivorb <lenivorb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 18:39:28 by lenivorb          #+#    #+#             */
/*   Updated: 2026/06/29 14:43:00 by lenivorb         ###   ########.fr       */
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
		return ((*get_signed_int_func(spec))(va_arg(*args, int), flags));
	else if ((*spec == 'u') || (*spec == 'x') || (*spec == 'X'))
		return ((*get_unsigned_int_func(spec))(va_arg(*args, unsigned int), flags));
	else if (lxy_compare(spec, "l"))
		return ((*get_long_func(spec))(va_arg(*args, long), flags));
	else if (lxy_compare(spec, "z"))
		return ((*get_ssize_t_func(spec))(va_arg(*args, ssize_t), flags));
	else if (*spec == 'p')
		return (lxy_put_pointer(va_args(*args, void *), flags));
	else
		return (0);
}
