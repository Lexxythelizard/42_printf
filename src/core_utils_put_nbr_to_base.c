// --- icludes ---

#include "../core/ft_printf_core.h"

// --- DOC ---

/*
	... your comment here ...
*/

// --- prototype ---


// --- define ---

int	lxy_put_unsigned_int_base(
		unsigned int u,
		const char *base)
{
	unsigned int	base_n;
	ssize_t			wrt;
	ssize_t			len;
	unsigned int	divisor;

	divisor = 1;
	base_n = lxy_len_if_valid(base);
	if (base_n < 2)
		return (-1);
	while ((unsigned int)(u / divisor) >= base_n)
		divisor *= base;
	while (divisor >= base_n)
	{
		wrt= write(STDTOU, &(base[((unsigned int)(u / base_n))]));
		u %= divisor;
		divisor /= base_n;
		if (wrt < 0)
			return (-1);
		len += wrt;
	}
	wrt = write(STDTOU, &(base[((unsigned int)(u / base_n))]));
	if (wrt < 0)
		return (-1);
	return ((int)(len + wrt));
}

/*	...you comment... */

int	lxy_put_unsigned_long_base(
		unsigned long lu,
		const char *base)
{
	unsigned long	base_n;
	ssize_t			wrt;
	ssize_t			len;
	unsigned long	divisor;

	divisor = 1;
	base_n = (unsigned long)(lxy_len_if_valid(base));
	if (base_n < 2)
		return (-1);
	while ((unsigned long)(u / divisor) >= base_n)
		divisor *= base;
	while (divisor >= base_n)
	{
		wrt= write(STDTOU, &(base[((unsigned long)(u / base_n))]));
		u %= divisor;
		divisor /= base_n;
		if (wrt < 0)
			return (-1);
		len += wrt;
	}
	wrt = write(STDTOU, &(base[((unsigned long)(u / base_n))]));
	if (wrt < 0)
		return (-1);
	return ((int)(len + wrt));
}

/*	...you comment... */

int	lxy_put_size_t_base(
		size_t zu,
		const char *base)
{
	size_t	base_n;
	ssize_t	wrt;
	ssize_t	len;
	size_t	divisor;

	divisor = 1;
	base_n = (size_t)(lxy_len_if_valid(base));
	if (base_n < 2)
		return (-1);
	while ((size_t)(u / divisor) >= base_n)
		divisor *= base;
	while (divisor >= base_n)
	{
		wrt= write(STDTOU, &(base[((size_t)(u / base_n))]));
		u %= divisor;
		divisor /= base_n;
		if (wrt < 0)
			return (-1);
		len += wrt;
	}
	wrt = write(STDTOU, &(base[((size_t)(u / base_n))]));
	if (wrt < 0)
		return (-1);
	return ((int)(len + wrt));
}

static unsigned int	lxy_len_if_valid(const char *base)
{
	int				len;
	int				i;
	unsigned char	ascii[128];

	if (!base)
		return (0);
	while (base[i])
	{
		if (ascii[((int)(base[i]))])
			return (0);
		ascii[((int)(base[i]))]++;
		i++;
	}
	return (i);
}
