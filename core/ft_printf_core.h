/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_core.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenivorb <lenivorb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 18:44:49 by lenivorb          #+#    #+#             */
/*   Updated: 2026/06/16 19:03:33 by lenivorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_CORE_H
# define FT_PRINTF_CORE_H

// --- include ---

# include <stdlib.h>
# include <unistd.h>

// --- DOC ---

/*
	...you comment here...
*/

// --- Makros ---

# define STDOUT 1

// --- prototype ---

// utils
int lxy_put_unsigned_int_base(unsigned int u, const char *base); 
int lxy_put_unsigned_long_base(unsigned long lu, const char *base);
int lxy_put_size_t_base(size_t zu, const char *base);
int	lxy_len_if_valid(const char *base);

// put functions

int	lxy_put_char(char c);
int	lxy_put_percent_sign(void);
int	lxy_put_trigger_hashflag(void);
int	lxy_put_str(char *s);
int	lxy_put_decimal(int dec);
int	lxy_put_unsdecimal(int);
int	lxy_put_hexa_lowercase(unsigned int u);
int	lxy_put_hexa_uppercase(unsigned int u);
int	lxy_put_long_hexa_lowercase(unsigned long lu);
int	lxy_put_long_hexa_uppercase(unsigned long lu);
int	lxy_put_long_long_hexa_lowercase(size_t zu);
int	lxy_put_long_long_hexa_uppercase(size_t zu);
int	lxy_put_pointer(void *ptr);

// not sure if I will implement them
int	lxy_put_long(long dec);
int	lxy_put_unslong(long dec);
int	lxy_put_float(float f);
int	lxy_put_double(double fl);

// --- end ---

#endif
