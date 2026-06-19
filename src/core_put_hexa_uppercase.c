// --- icludes ---

#include "../core/ft_printf_core.h"

// --- DOC ---

/*
	... your comment here ...
*/

// --- prototype ---

int	lxy_put_hexa_uppercase(unsigned int u);
int	lxy_put_long_hexa_uppercase(unsigned long lu);
int	lxy_put_long_long_hexa_uppercase(size_t zu);

// --- define ---

int	lxy_put_hexa_uppercase(unsigned int u)
{
	return (lxy_put_unsigned_int_base(u, HEXDEC_UP));
}

int	lxy_put_long_hexa_uppercase(unsigned long lu)
{
	return (lxy_put_unsigned_long_base(lu, HEXDEC_UP));
}

int	lxy_put_long_long_hexa_uppercase(size_t zu)
{
	return (lxy_put_size_t_base(zu, HEXDEC_UP));
}
