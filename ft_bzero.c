/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maheleni <maheleni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 08:57:43 by maheleni          #+#    #+#             */
/*   Updated: 2024/04/22 08:57:45 by maheleni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t len);

/**
* Writes n zeroed bytes ('\0') to the string s
* Parameters: 
	*s - string to write zeroed bytes to
	n - amount of bytes to write
*/
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
