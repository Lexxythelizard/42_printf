// --- icludes ---

#include "../core/ft_printf_core.h"

// --- DOC ---

/*
	... your comment here ...
*/

// --- prototype ---

int	lxy_put_char(char c);

// --- define ---

int	lxy_put_char(char c)
{
	return ((int)(write(STDOUT, &c, 1)));
}
