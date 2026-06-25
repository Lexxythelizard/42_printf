/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_core.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenivorb <lenivorb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 18:44:49 by lenivorb          #+#    #+#             */
/*   Updated: 2026/06/25 17:48:42 by lenivorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_CORE_H
# define FT_PRINTF_CORE_H

// --- include ---

# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>
# include <stdint.h>
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
# define NIL "nil"

# define SSZ_MIN LONG_MIN
# define SSZ_MAX LONG_MAX

# define HASH 35
# define WSP 32
# define PLUS 43

// --- struct ---

typedef struct s_flags
{
	int		hash;
	int		wsp;
	int		plus;
	int		wrt;
}			t_flags;

// --- prototype ---

// utils
int		lxy_put_unsigned_int_base(unsigned int u, const char *base); 
int		lxy_put_unsigned_long_base(unsigned long lu, const char *base);
int		lxy_put_size_t_base(size_t zu, const char *base);
int		lxy_strlen(const char *s);

// scan
int		is_flag(unsigned char c);
int		is_specifier(unsigned char c);
int		is_percent(unsigned char c);
int		is_equal(const char *s1, const char *s2, int size);

// flags
t_flags	*init_flag(void);

// get functions
int		(*get_char_func(const char *spec))(char c);
int		(*get_string_func(const char *spec))(const char *s);
int		(*get_long_func(const char *spec))(long l);
int		(*get_ssize_t_func(const char *spec))(ssize_t z);
int		(*get_signed_int_func(const char *spec))(int i);
int		(*get_unsigned_int_func(const char *spec))(unsigned int u);
int		(*get_unsigned_long_func(const char *spec))(unsigned long lu);
int		(*get_size_t_func(const char *spec))(size_t zu);

// put functions
int		lxy_put_char(char c);
int		lxy_put_str(const char *s);

int		lxy_put_percent_sign(void);
int		lxy_put_trigger_hashflag(void);
int		lxy_put_white_space(int n);

int		lxy_put_decimal(int dec);
int		lxy_put_undecimal(unsigned int udec);

int		lxy_put_signed_int(int i); 
int		lxy_put_signed_long(long l); 
int		lxy_put_ssize_t(ssize_t sz);
int		lxy_put_unsigned_int(unsigned int u); 
int		lxy_put_unsigned_long(unsigned long lu);
int		lxy_put_size_t(size_t zu);

int		lxy_put_hexa_lowercase(unsigned int u);
int		lxy_put_hexa_uppercase(unsigned int u);
int		lxy_put_long_hexa_lowercase(unsigned long lu);
int		lxy_put_long_hexa_uppercase(unsigned long lu);
int		lxy_put_long_long_hexa_lowercase(size_t zu);
int		lxy_put_long_long_hexa_uppercase(size_t zu);

int		lxy_put_pointer(void *ptr);

// not sure if I will implement them
int		lxy_put_float(float f);
int		lxy_put_double(double fl);

// --- end ---

#endif
