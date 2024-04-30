/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maheleni <maheleni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:58:42 by maheleni          #+#    #+#             */
/*   Updated: 2024/04/30 15:58:44 by maheleni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		magnitude;
	int		magnitude_c;
	char	*a;
	char	*orig_a;

	magnitude = 1;
	magnitude_c = 1;
	while (n / (magnitude * 10) >= 1)
	{
		magnitude = magnitude * 10;
		magnitude_c++;
	}
	a = (char *) malloc(magnitude_c * sizeof(char));
	if (a == NULL)
		return (NULL);
	orig_a = a;
	while (n >= 0)
	{
		*a = (n / magnitude) + '0';
		n = n - (magnitude * (n / magnitude));
		magnitude = magnitude / 10;
		a++;
	}
	return (orig_a);
}
