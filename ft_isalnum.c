/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maheleni <maheleni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 09:59:10 by maheleni          #+#    #+#             */
/*   Updated: 2025/07/21 11:10:05 by maheleni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* Determines if a character is an alphanumeric character (either a letter
* (alphabetic character) or a digit). Works only on characters in the standard
* ascii table (dec 0-127)
* @param c int representation of a character
* @return 1 if c is an alphanumeric character. 0 otherwise
*/
int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
