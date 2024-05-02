
#include "libft.h"

/**
* Outputs the string ’s’ to the given file descriptor
* Parameters:
*	*s - string to output
*	fd - filedescriptor of where to output
*/
void	ft_putstr_fd(char *s, int fd)
{
	while (*s != '\0')
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}