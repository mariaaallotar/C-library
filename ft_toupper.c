/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maheleni <maheleni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:25:13 by maheleni          #+#    #+#             */
/*   Updated: 2025/07/21 16:28:53 by maheleni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* Converts a lower-case letter to the corresponding upper-case letter. Works
* only on characters in the standard ascii table (dec 0-127)
* @param c int representation of a character
* @retval if c is lower-case: corresponding upper-case letter
* @retval if c is NOT lower case: the argument unchanged
*/
int	ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - 32);
	return (c);
}
