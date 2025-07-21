/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maheleni <maheleni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:47:19 by maheleni          #+#    #+#             */
/*   Updated: 2025/07/21 16:28:03 by maheleni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* Converts an upper-case letter to the corresponding lower-case letter. Works
* only on characters in the standard ascii table (dec 0-127)
* @param c int representation of a character
* @retval if c is upper-case: corresponding lower-case letter
* @retval if c is NOT upper case: the argument unchanged
*/
int	ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + 32);
	return (c);
}
