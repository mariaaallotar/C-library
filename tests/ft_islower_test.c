#include "tests.h"

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