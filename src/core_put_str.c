// --- icludes ---

#include "../core/ft_printf_core.h"

// --- DOC ---

/*
	... your comment here ...
*/

// --- prototype ---

int	lxy_put_str(const char *s);

// --- define ---

int	lxy_put_char(const char *s)
{
	return ((int)(write(STDOUT, s, lxy_strlen(*s))));
}
