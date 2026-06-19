/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_core.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenivorb <lenivorb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 19:27:47 by lenivorb          #+#    #+#             */
/*   Updated: 2026/06/19 20:28:40 by lenivorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// --- icludes ---

#include "../core/ft_printf_core.h"

// --- DOC ---

/*
	... your comment here ...
*/

// --- run ---

int	main(void)
{
	int count;

	count = 0;
	lxy_put_str("\n+++++++++++++++++++++++++++++++++\n\n");
	lxy_put_str("test1:\n");
	lxy_put_str("lxy_put_char(\'c\');\n");
	lxy_put_str("lxy_put_white_space(2);\n");
	lxy_put_str("lxy_put_trigger_hashflag();\n");
	lxy_put_str("lxy_put_char(\'\\n\');\n");
	count += lxy_put_char('c');
	count += lxy_put_white_space(2);
	count += lxy_put_trigger_hashflag();
	count += lxy_put_char(10);
	lxy_put_signed_int(count);
	lxy_put_str("\n+++++++++++++++++++++++++++++++++\n\n");
}
