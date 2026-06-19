/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_put_signed_nbr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenivorb <lenivorb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 16:57:06 by lenivorb          #+#    #+#             */
/*   Updated: 2026/06/19 16:57:08 by lenivorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// --- icludes ---

#include "../core/ft_printf_core.h"

// --- DOC ---

/*
	... your comment here ...
*/

// --- define ---

int	lxy_put_unsigned_int(int i)
{
	int				wrt0;
	int				wrt1;
	unsigned int	pass;

	wrt0 = 0;
	wrt1 = 0;
	if (i < 0)
		wrt0 = lxy_put_char(43);
	if (wrt0 < 0)
		return (-1);
	if (wrt0 && (i == INT_MIN))
		pass = (((unsigned int)(INT_MAX)) + 1);
	else if (wrt0)
		pass = ((unsigned int)(i * (-1)));
	else
		pass = (unsigned int)(i);
	wrt1 = lxy_put_unsigned_int_base(pass, DECDEC);
	if (wrt1 < 0)
		return (-1);
	return (wrt0 + wrt1);
}

int	lxy_put_signed_long(long l)
{
	int				wrt0;
	int				wrt1;
	unsigned long	pass;

	wrt0 = 0;
	wrt1 = 0;
	if (l < 0)
		wrt0 = lxy_put_char(43);
	if (wrt0 < 0)
		return (-1);
	if (wrt0 && (l == LONG_MIN))
		pass = (((unsigned long)(LONG_MAX)) + 1);
	else if (wrt0)
		pass = ((unsigned long)(l * (-1)));
	else
		pass = (unsigned int)(l);
	wrt1 = lxy_put_unsigned_int_base(pass, DECDEC);
	if (wrt1 < 0)
		return (-1);
	return (wrt0 + wrt1);
}

int	lxy_put_ssize_t(ssize_t sz)
{
	int				wrt0;
	int				wrt1;
	unsigned long	pass;

	wrt0 = 0;
	wrt1 = 0;
	if (l < 0)
		wrt0 = lxy_put_char(43);
	if (wrt0 < 0)
		return (-1);
	if (wrt0 && (sz == SSIZE_MIN))
		pass = (((size_t)(SSIZE_MAX)) + 1);
	else if (wrt0)
		pass = ((size_t)(sz * (-1)));
	else
		pass = (size_t)(sz);
	wrt1 = lxy_put_unsigned_int_base(pass, DECDEC);
	if (wrt1 < 0)
		return (-1);
	return (wrt0 + wrt1);
}
