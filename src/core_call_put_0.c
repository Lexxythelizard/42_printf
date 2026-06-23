/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_call_put_0.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenivorb <lenivorb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 18:39:28 by lenivorb          #+#    #+#             */
/*   Updated: 2026/06/23 20:47:11 by lenivorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// --- icludes ---

#include "../ft_printf.h"
#include "../core/ft_printf_core.h"

// --- DOC ---

/*
	TODO: implement a function to print pointer
*/

// --- define ---

/* u if		x else if		X else*/

int	(*get_unsigned_int_func(const char *spec))(unsigned int u)
{
	if (lxy_compare(spec, "u"))
		return (&lxy_put_unsigned_int);
	else if (lxy_compare(spec, "x"))
		return (&lxy_put_hexa_lowercase);
	else
		return (&lxy_put_hexa_uppercase);
}

/* lu if	xl else if		Xl else*/

int	(*get_unsigned_long_func(const char *spec))(unsigned long ul)
{
	if (lxy_compare(spec, "lu"))
		return (&lxy_put_unsigned_long);
	else if (lxy_compare(spec, "xl"))
		return (&lxy_put_long_hexa_lowercase);
	else
		return (&lxy_put_long_hexa_uppercase);
}

/* zu if	xz else if		Xz else*/

int	(*get_size_t_func(const char *spec))(size_t zu)
{
	if (lxy_compare(spec, "zu"))
		return (&lxy_put_size_t);
	else if (lxy_compare(spec, "xz"))
		return (&lxy_put_long_long_hexa_lowercase);
	else
		return (&lxy_put_long_long_hexa_uppercase);
}
