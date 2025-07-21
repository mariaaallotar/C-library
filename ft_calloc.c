/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maheleni <maheleni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 09:45:52 by maheleni          #+#    #+#             */
/*   Updated: 2025/07/21 11:07:01 by maheleni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* Contiguously allocates enough space for count objects that are size bytes of
* memory each and returns a pointer to the allocated memory. The allocated
* memory is filled with bytes of value zero.
* @param count - amount of memoryspaces
* @param size - size in bytes of each memoryspace
* @returns a pointer to the allocated memoryspace, NULL if allocation failed
*/
void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	if (count != 0 && size > SIZE_MAX / count)
		return (NULL);
	mem = malloc (count * size);
	if (mem == NULL)
		return (NULL);
	mem = ft_memset(mem, 0, count * size);
	return (mem);
}
