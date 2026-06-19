/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_core.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenivorb <lenivorb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 18:44:49 by lenivorb          #+#    #+#             */
/*   Updated: 2026/06/19 20:46:53 by lenivorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_CORE_H
# define FT_PRINTF_CORE_H

// --- include ---

# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

// --- DOC ---

/*
	...you comment here...
*/

// --- Makros ---

# define STDOUT 1
# define HEXDEC_LO "0123456789abcdef"
# define HEXDEC_UP "0123456789ABCDEF"
# define DECDEC "0123456789"

# define SSZ_MIN LONG_MIN
# define SSZ_MAX LONG_MAX

// --- prototype ---

// utils
int	lxy_put_unsigned_int_base(unsigned int u, const char *base); 
int	lxy_put_unsigned_long_base(unsigned long lu, const char *base);
int	lxy_put_size_t_base(size_t zu, const char *base);
int	lxy_strlen(const char *s);

// put functions
int	lxy_put_char(char c);
int	lxy_put_str(const char *s);

int	lxy_put_percent_sign(void);
int	lxy_put_trigger_hashflag(void);
int	lxy_put_white_space(int n);

int	lxy_put_decimal(int dec);
int	lxy_put_unsdecimal(int udec);

int	lxy_put_signed_int(int i); 
int	lxy_put_signed_long(long l); 
int	lxy_put_ssize_t(ssize_t sz);
int	lxy_put_unsigned_int(unsigned int u); 
int	lxy_put_unsigned_long(unsigned long lu);
int	lxy_put_size_t(size_t zu);

int	lxy_put_hexa_lowercase(unsigned int u);
int	lxy_put_hexa_uppercase(unsigned int u);
int	lxy_put_long_hexa_lowercase(unsigned long lu);
int	lxy_put_long_hexa_uppercase(unsigned long lu);
int	lxy_put_long_long_hexa_lowercase(size_t zu);
int	lxy_put_long_long_hexa_uppercase(size_t zu);

int	lxy_put_pointer(void *ptr);

// not sure if I will implement them
int	lxy_put_float(float f);
int	lxy_put_double(double fl);

// --- end ---

#endif
