/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_put_hexa_uppercase.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenivorb <lenivorb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 16:56:45 by lenivorb          #+#    #+#             */
/*   Updated: 2026/06/19 16:56:48 by lenivorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// --- icludes ---

#include "../core/ft_printf_core.h"

// --- DOC ---

/*
	... your comment here ...
*/

// --- define ---

int	lxy_put_hexa_uppercase(unsigned int u)
{
	return (lxy_put_unsigned_int_base(u, HEXDEC_UP));
}

int	lxy_put_long_hexa_uppercase(unsigned long lu)
{
	return (lxy_put_unsigned_long_base(lu, HEXDEC_UP));
}

int	lxy_put_long_long_hexa_uppercase(size_t zu)
{
	return (lxy_put_size_t_base(zu, HEXDEC_UP));
}
