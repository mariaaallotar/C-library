/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maheleni <maheleni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 14:14:04 by maheleni          #+#    #+#             */
/*   Updated: 2025/07/21 11:12:04 by maheleni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
* Determines if a character is an standard ascii character (dec 0-127)
* @param c int representation of a character
* @returns 1 if c is part of ascii table, 0 otherwise
*/
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
