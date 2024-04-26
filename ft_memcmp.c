
#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    if (n == 0)
        return (0);
	while (n >= 0 && (unsigned char) *(char *) s1 == (unsigned char) *(char *) s2)
	{
		s1++;
		s2++;
		n--;
		if (n == 0)
			return (0);
	}
	return ((unsigned char) *(char *) s1 - (unsigned char) *(char *) s2);
}