/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_flags.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenivorb <lenivorb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 17:07:56 by lenivorb          #+#    #+#             */
/*   Updated: 2026/06/27 13:03:52 by lenivorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char c = 'c';
	char s[3] = "abc";
	int i = 42;
	int neg = -42;
	unsigned u = 42u;
	long L = 1234567L;
	unsigned long UL = 1234567UL;
	double f = 3.141592653589793;
	double e = 0.0012345;
	void *p;

	p = malloc(1);
	if (!p)
		return (-1);

	printf("\n-----------------------------------------------------\n\n");
	printf("test 0:\tpositiv integer\n");
	printf("i=% d\n", i);
	printf("i=%#d\n", i);
	printf("i=%+d\n", i);
	printf("i=% #d\n", i);
	printf("i=% +d\n", i);
	printf("i=%#+d\n", i);
	printf("i=%# d\n", i);
	printf("i=%+ d\n", i);
	printf("i=%+#d\n", i);
	printf("i=%# +d\n", i);

	printf("\n-----------------------------------------------------\n\n");
	printf("test 1:\tnegativ values\n");
	printf("i=% d\n", neg);
	printf("i=%#d\n", neg);
	printf("i=%+d\n", neg);
	printf("i=% #d\n", neg);
	printf("i=% +d\n", neg);
	printf("i=%#+d\n", neg);
	printf("i=%# d\n", neg);
	printf("i=%+ d\n", neg);
	printf("i=%+#d\n", neg);
	printf("i=%# +d\n", neg);

	printf("\n-----------------------------------------------------\n\n");
	printf("test 2:\tunsigned values\n");
	printf("i=% u\n", u);
	printf("i=%#u\n", u);
	printf("i=%+u\n", u);
	printf("i=% #u\n", u);
	printf("i=% +u\n", u);
	printf("i=%#+u\n", u);
	printf("i=%# u\n", u);
	printf("i=%+ u\n", u);
	printf("i=%+#u\n", u);
	printf("i=%# +u\n", u);

	printf("\n-----------------------------------------------------\n\n");
	printf("test 3:\tfloat values\n");
	printf("i=% u\n", u);
	printf("i=%#f\n", f);
	printf("i=%+f\n", f);
	printf("i=% #f\n", f);
	printf("i=% +f\n", f);
	printf("i=%#+f\n", f);
	printf("i=%# f\n", f);
	printf("i=%+ f\n", f);
	printf("i=%+#f\n", f);
	printf("i=%# +f\n", f);

	printf("\n-----------------------------------------------------\n\n");
	printf("test 4:\tchar values\n");
	printf("i=% c\n", c);
	printf("i=%#c\n", c);
	printf("i=%+c\n", c);
	printf("i=% #c\n", c);
	printf("i=% +c\n", c);
	printf("i=%#+c\n", c);
	printf("i=%# c\n", c);
	printf("i=%+ c\n", c);
	printf("i=%+#c\n", c);
	printf("i=%# +c\n", c);

	printf("\n-----------------------------------------------------\n\n");
	printf("test 5:\tstring values\n");
	printf("i=% s\n", s);
	printf("i=%#s\n", s);
	printf("i=%+s\n", s);
	printf("i=% #s\n", s);
	printf("i=% +s\n", s);
	printf("i=%#+s\n", s);
	printf("i=%# s\n", s);
	printf("i=%+ s\n", s);
	printf("i=%+#s\n", s);
	printf("i=%# +s\n", s);

	printf("\n-----------------------------------------------------\n\n");
	printf("test 6:\tpointer values\n");
	printf("i=% p\n", p);
	printf("i=%#p\n", p);
	printf("i=%+p\n", p);
	printf("i=% #p\n", p);
	printf("i=% +p\n", p);
	printf("i=%#+p\n", p);
	printf("i=%# p\n", p);
	printf("i=%+ p\n", p);
	printf("i=%+#p\n", p);
	printf("i=%# +p\n", p);

	printf("\n-----------------------------------------------------\n\n");
	printf("test 7:\thex values\n");
	printf("i=% x\n", i);
	printf("i=%#x\n", i);
	printf("i=%+x\n", i);
	printf("i=% #x\n", i);
	printf("i=% +x\n", i);
	printf("i=%#+x\n", i);
	printf("i=%# x\n", i);
	printf("i=%+ x\n", i);
	printf("i=%+#x\n", i);
	printf("i=%# +x\n", i);

	printf("\n-----------------------------------------------------\n\n");
	printf("test 8:\thex values with unsigned\n");
	printf("i=% x\n", u);
	printf("i=%#x\n", u);
	printf("i=%+x\n", u);
	printf("i=% #x\n", u);
	printf("i=% +x\n", u);
	printf("i=%#+x\n", u);
	printf("i=%# x\n", u);
	printf("i=%+ x\n", u);
	printf("i=%+#x\n", u);
	printf("i=%# +x\n", u);

	free(p);
	return 0;
}
