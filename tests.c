/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maheleni <maheleni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:13:16 by maheleni          #+#    #+#             */
/*   Updated: 2024/04/18 17:13:18 by maheleni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_islower(int c);
int	ft_isupper(int c);

void	ft_islower_test()
{
	int	i = -10;

	while (i < 300)
	{
		if (ft_islower(i) == 0 && islower(i) != 0)
			printf("For the value %d (char %c) ft function gives 0 and standard function non-zero\n", i, (char) i);
		else if (ft_islower(i) != 0 && islower(i) == 0)
			printf("For the value %d (char %c) ft function gives 0 and standard function non-zero\n", i, (char) i);
		i++;
	}
}

void	ft_isupper_test()
{
	int	i = -10;

	while (i < 300)
	{
		if (ft_isupper(i) == 0 && isupper(i) != 0)
			printf("For the value %d (char %c) ft function gives 0 and standard function non-zero\n", i, (char) i);
		else if (ft_isupper(i) != 0 && isupper(i) == 0)
			printf("For the value %d (char %c) ft function gives 0 and standard function non-zero\n", i, (char) i);
		i++;
	}
}

int	main()
{
	ft_islower_test();
	ft_isupper_test();
	printf("All tests done.\n");
	return (0);
}