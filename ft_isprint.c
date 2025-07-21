/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maheleni <maheleni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 14:52:10 by maheleni          #+#    #+#             */
/*   Updated: 2025/07/21 11:14:28 by maheleni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
* Determines if a character is a printable ascii character. Works only on
* characters in the standard ascii table (dec 0-127)
* @param c int representation of a character
* @returns 1 if c is a printable character, 0 otherwise
*/
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
