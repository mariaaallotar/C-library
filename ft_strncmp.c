/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maheleni <maheleni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:09:23 by maheleni          #+#    #+#             */
/*   Updated: 2025/07/21 12:20:31 by maheleni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* Compares lexicographically the null-terminated strings s1 and s2 but not more
* than n characters
* @param s1 first of strings to compare
* @param s2 second of trings to compare
* @param n amount of characters to compare (at most)
* @returns An integer that represents the difference in the first unequal
* charcters in the strings
* @retval return value > 0: s1 is grater than s2
* @retval return value = 0: s1 is equal to s2
* @retval return value < 0: s1 is smaller than s2
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while ((unsigned char) *s1 == (unsigned char) *s2
		&& (unsigned char) *s1 != '\0')
	{
		s1++;
		s2++;
		n--;
		if (n == 0)
			return (0);
	}
	return ((unsigned char) *s1 - (unsigned char) *s2);
}
