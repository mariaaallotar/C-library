
#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *str)
{
	int		sign;
	long	num;

	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	} else if (*str == '+')
		str++;
	num = 0;
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		if (num * sign >= INT_MAX)
			return (INT_MAX);
		if (num * sign <= INT_MIN)
			return (INT_MIN);
		str++;
	}
	return (sign * num);
}