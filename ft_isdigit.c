/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maheleni <maheleni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 09:45:33 by maheleni          #+#    #+#             */
/*   Updated: 2025/07/21 11:12:44 by maheleni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
* Determines if a character is a digit. Works only on characters in the
* standard ascii table (dec 0-127)
* @param c int representation of a character
* @returns 1 if c is a digit, 0 otherwise
*/
int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
