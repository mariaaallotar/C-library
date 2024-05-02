
#include "libft.h"

/**
* Outputs the character ’c’ to the given file descriptor
* Parameters:
*	c - character to output
*	fd - filedescriptor of where to output
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(char));
}