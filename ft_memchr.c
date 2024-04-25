/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maheleni <maheleni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 11:24:54 by maheleni          #+#    #+#             */
/*   Updated: 2024/04/25 11:25:10 by maheleni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while ((unsigned char) *(char *) s != '\0' && n > 0)
	{
		if ((unsigned char) *(char *) s == (unsigned char) c)
			return ((void *) s);
		s++;
		n--;
	}
	if ( (unsigned char) *(char *) s != '\0' && c == '\0' && n > 0)
		return ((void *) s);
	return (NULL);
}
