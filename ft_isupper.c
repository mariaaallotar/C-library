/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maheleni <maheleni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:03:25 by maheleni          #+#    #+#             */
/*   Updated: 2025/07/21 11:15:07 by maheleni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
* Determines if a character is a uppercase letter. Works only on characters
* in the standard ascii table (dec 0-127)
* @param c int representation of a character
* @returns 1 if c is a uppercase letter, 0 otherwise
*/
int	ft_isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
