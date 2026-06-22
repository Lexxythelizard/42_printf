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
	lxy_put_char(10);
	count = 0;
	lxy_put_str("count the length of this line: \"");
	count = lxy_put_str(HEXDEC_UP);
	lxy_put_str("\" : ");
	lxy_put_signed_int(count);
	lxy_put_char(10);

	lxy_put_str("\n--------------------------------\n");
	lxy_put_str("test2:\n");
	lxy_put_str("lxy_put_signed_int(0);\n");
	count = 0;
	lxy_put_char(9);
	lxy_put_str("result: ");
	count = lxy_put_signed_int(0);
	lxy_put_str("\tcharacters: ");
	lxy_put_signed_int(count);
	lxy_put_char(10);
	lxy_put_str("lxy_put_signed_int(1);\n");
	count = 0;
	lxy_put_char(9);
	lxy_put_str("result: ");
	count = lxy_put_signed_int(1);
	lxy_put_str("\tcharacters: ");
	lxy_put_signed_int(count);
	lxy_put_char(10);
	lxy_put_str("lxy_put_signed_int(-1);\n");
	count = 0;
	lxy_put_char(9);
	lxy_put_str("result: ");
	count = lxy_put_signed_int(-1);
	lxy_put_str("\tcharacters: ");
	lxy_put_signed_int(count);
	lxy_put_char(10);
	lxy_put_str("lxy_put_signed_int(42);\n");
	count = 0;
	lxy_put_char(9);
	lxy_put_str("result: ");
	count = lxy_put_signed_int(42);
	lxy_put_str("\tcharacters: ");
	lxy_put_signed_int(count);
	lxy_put_char(10);
	lxy_put_str("lxy_put_signed_int(-42);\n");
	count = 0;
	lxy_put_char(9);
	lxy_put_str("result: ");
	count = lxy_put_signed_int(-42);
	lxy_put_str("\tcharacters: ");
	lxy_put_signed_int(count);
	lxy_put_char(10);
	lxy_put_str("lxy_put_signed_int(INT_MAX);\n");
	count = 0;
	lxy_put_char(9);
	lxy_put_str("result: ");
	count = lxy_put_signed_int(INT_MAX);
	lxy_put_str("\tcharacters: ");
	lxy_put_signed_int(count);
	lxy_put_char(10);
	lxy_put_str("lxy_put_signed_int(INT_MIN);\n");
	count = 0;
	lxy_put_char(9);
	lxy_put_str("result: ");
	count = lxy_put_signed_int(INT_MIN);
	lxy_put_str("\tcharacters: ");
	lxy_put_signed_int(count);
	lxy_put_char(10);
	lxy_put_str("\n+++++++++++++++++++++++++++++++++\n\n");
}
