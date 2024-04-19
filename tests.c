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
int	ft_isalpha(int c);
int	ft_isdigit(int c);

void	ft_islower_test()
{
	int	i = -10;

	while (i < 300)
	{
		if (ft_islower(i) == 0 && islower(i) != 0)
			printf("For the value %d (char %c) ft_islower gives 0 and standard function non-zero\n", i, (char) i);
		else if (ft_islower(i) != 0 && islower(i) == 0)
			printf("For the value %d (char %c) ft_islower gives non-zero and standard function 0\n", i, (char) i);
		i++;
	}
}

void	ft_isupper_test()
{
	int	i = -10;

	while (i < 300)
	{
		if (ft_isupper(i) == 0 && isupper(i) != 0)
			printf("For the value %d (char %c) ft_isupper gives 0 and standard function non-zero\n", i, (char) i);
		else if (ft_isupper(i) != 0 && isupper(i) == 0)
			printf("For the value %d (char %c) ft_isupper gives non-zero and standard function 0\n", i, (char) i);
		i++;
	}
}

void	ft_isalpha_test()
{
	int	i = -10;

	while (i < 300)
	{
		if (ft_isalpha(i) == 0 && isalpha(i) != 0)
			printf("For the value %d (char %c) ft_isalpha gives 0 and standard function non-zero\n", i, (char) i);
		else if (ft_isalpha(i) != 0 && isalpha(i) == 0)
			printf("For the value %d (char %c) ft_isalpha gives non-zero and standard function 0\n", i, (char) i);
		i++;
	}
}

void	ft_isdigit_test()
{
	int	i = -10;

	while (i < 300)
	{
		if (ft_isdigit(i) == 0 && isdigit(i) != 0)
			printf("For the value %d (char %c) ft_isdigit gives 0 and standard function non-zero\n", i, (char) i);
		else if (ft_isdigit(i) != 0 && isdigit(i) == 0)
			printf("For the value %d (char %c) ft_isdigit gives non-zero and standard function 0\n", i, (char) i);
		i++;
	}
}

int	main()
{
	ft_islower_test();
	ft_isupper_test();
	ft_isalpha_test();
	ft_isdigit_test();
	printf("All tests done.\n");
	return (0);
}