/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_flags.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenivorb <lenivorb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 18:39:28 by lenivorb          #+#    #+#             */
/*   Updated: 2026/06/23 20:44:25 by lenivorb         ###   ########.fr       */
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

t_flags	*init_flag(void)
{
	t_flag	*new_instance;

	new_instance = malloc(16);
	if (!new_instance)
		return (NULL);
	new_instance -> hash = 0;
	new_instance -> wsp = 0;
	new_instance -> plus = 0;
	new_instance -> wrt = 0;
	return (new_instance);
}
