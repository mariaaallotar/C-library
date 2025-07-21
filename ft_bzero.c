/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maheleni <maheleni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 08:57:43 by maheleni          #+#    #+#             */
/*   Updated: 2025/07/21 11:05:00 by maheleni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* Writes n zeroed bytes ('\0') to the string s
* @param s string to write zeroed bytes to
* @param n amount of bytes to write (must be non-negaitve value)
* @note Bevaior undefined if n is bigger than size of s
*/
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
