/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maheleni <maheleni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 09:46:21 by maheleni          #+#    #+#             */
/*   Updated: 2024/04/30 09:46:22 by maheleni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* Converts the initial portion of the string pointed to by str to
*	int representation.
* Parameters:
*	*str - string of numbers to convert to int
* Returns:
*	The number in int representation
*	0 if conversion was not possible (e.g. no number present in initial portion
*		or number too big for int)
* Note:
*	When 0 is returned, it is not clear if it is the RESULT of the conversion
*		(*str == "0") or ERROR in the conversion
*/
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
	}
	else if (*str == '+')
		str++;
	num = 0;
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		if (num * sign > INT_MAX)
			return (0);
		if (num * sign < INT_MIN)
			return (0);
		str++;
	}
	return (sign * num);
}
