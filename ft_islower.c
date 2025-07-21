/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maheleni <maheleni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:41:15 by maheleni          #+#    #+#             */
/*   Updated: 2025/07/21 11:13:54 by maheleni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
* Determines if a character is a lowercase letter. Works only on characters
* in the standard ascii table (dec 0-127)
* @param c int representation of a character
* @returns 1 if c is a lowercase letter, 0 otherwise
*/
int	ft_islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
