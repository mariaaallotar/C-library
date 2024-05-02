
#include "libft.h"

/**
* Outputs the string ’s’ to the given file descriptor followed by a newline
* Parameters:
*	*s - string to output
*	fd - filedescriptor on which to write
*/
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}