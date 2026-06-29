/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_call_put_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenivorb <lenivorb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 18:39:28 by lenivorb          #+#    #+#             */
/*   Updated: 2026/06/25 14:56:46 by lenivorb         ###   ########.fr       */
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

int	(*get_char_func(const char *spec))(char c)
{
	(void)(spec);
	return (&lxy_put_char);
}

int	(*get_string_func(const char *spec))(const char *s)
{
	(void)(spec);
	return (&lxy_put_str);
}

int	(*get_long_func(const char *spec))(long lu)
{
	(void)(spec);
	return (&lxy_put_signed_long);
}

int	(*get_ssize_t_func(const char *spec))(ssize_t z)
{
	(void)(spec);
	return (&lxy_put_ssize_t);
}

/* i: if		d: else */

int	(*get_signed_int_func(const char *spec))(int i)
{
	if (*spec == 'i')
		return (&lxy_put_signed_int);
	return (&lxy_put_signed_int);
}
