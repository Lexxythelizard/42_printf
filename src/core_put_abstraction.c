// --- icludes ---

#include "../core/ft_printf_core.h"

// --- DOC ---

/*
	... your comment here ...
*/

// --- prototype ---

int	lxy_put_percent_sign(void);

// --- define ---

int	lxy_put_percent_sign(void)
{
	return (lxy_put_char(37));
}

int	lxy_put_trigger_hashflag(void)
{
	return (lxy_put_str("0x"));
}

void	lxy_put_white_space(int n)
{
	int	written;

	written = n;
	while(n--)
	{
		if (lxy_put_char(32) == (-1))
			return (-1);
	}
	return (written)
}
