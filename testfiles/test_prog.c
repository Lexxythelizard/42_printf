/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_prog.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenivorb <lenivorb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 13:41:43 by lenivorb          #+#    #+#             */
/*   Updated: 2026/07/01 21:01:55 by lenivorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// --- icludes ---

#include "../ft_printf.h"

// --- DOC ---

/*
	... your comment here ...
*/

// --- prototype ---

void	func0(void);

// --- run ---

int	main(void)
{
	ft_printf("\n++++++++++++++++++++++++++++++++++++++++++++\n\n");
	ft_printf("test 0: lets start simple:\n");
	ft_printf("Hello world\n");
	ft_printf("Hello world%c\n", '!');
	ft_printf("Hello world% d\n", 42);
	ft_printf("Hello world %s\n", "I like C!");

	ft_printf("\n--------------------------------------------\n");
	ft_printf("test 1: multiple specifiers\n");
	ft_printf("Hello %sworld %sthe result is: %s\n",
		"is the most common word to start\n",
		"follows mostly\n",
		"hello world");
	ft_printf("The %      s of % +++#s could be %#####s!\n",
		"number",
		"flags",
		"arbitary");
	ft_printf("Lets %s%s%      s% +++#s%#####s\n",
		"check ", "all ", "specifiers ",
		"squeszed ", "together");

	/*
	ft_printf("\n--------------------------------------------\n");
	ft_printf("test 2: multiple specifiers\n");
	ft_printf("test follows:\n");
	*/

	ft_printf("\n++++++++++++++++++++++++++++++++++++++++++++\n\n");
	return (0);
}

// --- define ---

void	func0(void)
{
	return ;
}

