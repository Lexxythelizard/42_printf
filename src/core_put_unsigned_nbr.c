// --- icludes ---

#include "../core/ft_printf_core.h"

// --- DOC ---

/*
	... your comment here ...
*/

// --- prototype ---

int	lxy_put_unsigned_int(unsigned int u);
int	lxy_put_unsigned_long(unsigned long lu);
int	lxy_put_size_t(size_t zu);

// --- define ---

int	lxy_put_unsigned_int(unsigned int u)
{
	return (lxy_put_unsigned_int_base(u, DECDEC));
}

int	lxy_put_unsigned_long(unsigned long lu)
{
	return (lxy_put_unsigned_long_base(lu, DECDEC));
}

int	lxy_put_size_t(size_t zu)
{
	return (lxy_put_size_t_base(zu, DECDEC));
}
