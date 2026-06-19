/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_put_unsigned_nbr.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenivorb <lenivorb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 16:57:29 by lenivorb          #+#    #+#             */
/*   Updated: 2026/06/19 16:57:31 by lenivorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// --- icludes ---

#include "../core/ft_printf_core.h"

// --- DOC ---

/*
	... your comment here ...
*/

// --- define ---

int	lxy_put_unsigned_int(unsigned int u)
{
	return (lxy_put_unsigned_int_base(u, DECDEC));
}

int	lxy_put_unsigned_long(unsigned long lu)
{
	return (lxy_put_unsigned_long_base(lu, DECDEC));
}

int	lxy_put_size_t(size_t zu)
{
	return (lxy_put_size_t_base(zu, DECDEC));
}
