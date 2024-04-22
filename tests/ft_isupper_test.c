
#include "tests.h"

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