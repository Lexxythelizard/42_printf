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

// --- DOC ---

/*
	...you comment here...
*/

// --- Makros ---

# define YOUR_MAKRO 42

// --- prototype ---

// utils

void	lxy_putnbr_base(ssize_t nbr, const char *base);
int		lxy_len_if_valid(void);

// put functions

void	lxy_put_char(char c);
void	lxy_put_percent_sign(void);
void	lxy_put_trigger_hashflag(void);
void	lxy_put_str(char *s);
void	lxy_put_decimal(int dec);
void	lxy_put_unsdecimal(void);
void	lxy_put_hexa_lowercase(ssize_t);
void	lxy_put_hexa_uppercase(ssize_t);
void	lxy_put_pointer(void *ptr):

// not sure if I will implement them
void	lxy_put_long(long dec);
void	lxy_put_unslong(long dec);
void	lxy_put_float(float f);
void	lxy_put_double(double fl);

// --- end ---

#endif
