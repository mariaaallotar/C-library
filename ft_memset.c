/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maheleni <maheleni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:10:58 by maheleni          #+#    #+#             */
/*   Updated: 2025/07/21 11:49:53 by maheleni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* Writes len bytes of value c (converted to an unsigned char) to the string s
* @param s string to write into
* @param c int representation of the character to write into the string
* @param len length of string to write the charcter into
* @returns The modified string as a void pointer
*/
void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*str;

	str = (unsigned char *) s;
	while (len > 0)
	{
		*str = (unsigned char) c;
		str++;
		len--;
	}
	return (s);
}
