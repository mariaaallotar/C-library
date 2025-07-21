/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maheleni <maheleni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 09:39:33 by maheleni          #+#    #+#             */
/*   Updated: 2025/07/21 12:23:46 by maheleni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* Checks if the null-terminated string needle is found in the len first
* characters of the string haystack
* @param haystack string to search from
* @param needle string to find in haystack
* @param len amount of characters to search from (at most)
* @return 1 needle found, 0 needle NOT found
*/
static int	needle_found(const char *haystack, const char *needle, size_t len)
{
	while (len > 0 && *haystack != '\0' && *needle != '\0')
	{
		if (*haystack != *needle)
			return (0);
		haystack++;
		needle++;
		len--;
	}
	if (len == 0 && *needle != '\0')
		return (0);
	if (*needle != '\0')
		return (0);
	return (1);
}

/**
* Locates the first occurrence of the null-terminated string needle in the
* string haystack, where not more than len characters are searched
* @param haystack string to search from
* @param needle string to find in haystack
* @param len amount of characters to search from (at most)
* @retval haystack: when needle is an empty string
* @retval NULL: needle occurs nowhere in haystack
* @retval pointer to the first character of the first occurrence of needle
* in haystack
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (*needle == '\0')
		return ((char *) haystack);
	while (len > 0 && *haystack != '\0')
	{
		if (*haystack == *needle)
		{
			if (needle_found (haystack, needle, len))
				return ((char *) haystack);
		}
		haystack++;
		len--;
	}
	return (NULL);
}
