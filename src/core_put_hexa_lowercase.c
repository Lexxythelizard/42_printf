/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_put_hexa_lowercase.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenivorb <lenivorb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 16:56:26 by lenivorb          #+#    #+#             */
/*   Updated: 2026/06/19 16:56:28 by lenivorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// --- icludes ---

#include "../core/ft_printf_core.h"

// --- DOC ---

/*
	... your comment here ...
*/

// --- define ---

int	lxy_put_hexa_lowercase(unsigned int u)
{
	return (lxy_put_unsigned_int_base(u, HEXDEC_LO));
}

int	lxy_put_long_hexa_lowercase(unsigned long lu)
{
	return (lxy_put_unsigned_long_base(lu, HEXDEC_LO));
}

int	lxy_put_long_long_hexa_lowercase(size_t zu)
{
	return (lxy_put_size_t_base(zu, HEXDEC_LO));
}

int	lxy_put_pointer(void *p)
{
	if (!p)
		return (lxy_put_str(NIL));
	return (lxy_put_unsigned_long_base(p, HEXDEC_LO));
}
