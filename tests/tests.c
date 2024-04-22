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

#include "tests.h"

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

void	ft_isalnum_test()
{
	int	i = -10;

	while (i < 300)
	{
		if (ft_isalnum(i) == 0 && isalnum(i) != 0)
			printf("For the value %d (char %c) ft_isalnum gives 0 and standard function non-zero\n", i, (char) i);
		else if (ft_isalnum(i) != 0 && isalnum(i) == 0)
			printf("For the value %d (char %c) ft_isalnum gives non-zero and standard function 0\n", i, (char) i);
		i++;
	}
}

void	ft_toupper_test()
{
	int	i = -10;

	while (i < 300)
	{
		int	ft_result = ft_toupper(i);
		int	result = toupper(i);
		if (ft_result != result)
			printf("For the value %d (char %c) ft_toupper gives %c and standard function %c\n", i, (char) i, (char) ft_result, (char) result);
		i++;
	}
}

void	ft_tolower_test()
{
	int	i = -10;

	while (i < 300)
	{
		int	ft_result = ft_tolower(i);
		int	result = tolower(i);
		if (ft_result != result)
			printf("For the value %d (char %c) ft_tolower gives %c and standard function %c\n", i, (char) i, (char) ft_result, (char) result);
		i++;
	}
}

void	ft_isascii_test()
{
	int	i = -10;

	while (i < 300)
	{
		if (ft_isascii(i) == 0 && isascii(i) != 0)
			printf("For the value %d (char %c) ft_isascii gives 0 and standard function non-zero\n", i, (char) i);
		else if (ft_isascii(i) != 0 && isascii(i) == 0)
			printf("For the value %d (char %c) ft_isascii gives non-zero and standard function 0\n", i, (char) i);
		i++;
	}
}

void	ft_isprint_test()
{
	int	i = -10;

	while (i < 300)
	{
		if (ft_isprint(i) == 0 && isprint(i) != 0)
			printf("For the value %d (char %c) ft_isprint gives 0 and standard function non-zero\n", i, (char) i);
		else if (ft_isprint(i) != 0 && isprint(i) == 0)
			printf("For the value %d (char %c) ft_isprint gives non-zero and standard function 0\n", i, (char) i);
		i++;
	}
}

void	ft_bzero_test()
{
	char ft_s[] = "abcdef";
	char s[] = "abcdef";
	size_t n = 3;

	ft_bzero((void *)ft_s, n);
	bzero((void *)s, n);
	int i = 0;
	while (i < 6)
	{
		if (ft_s[i] == '\0' && s[i] == 0)
		{	i++;
			continue;
		}
		if (ft_s[i] == '\0')
		{
			printf("For the index %d, ft_bzero has a zeroed byte but the standard function %c", i, s[i]);
		}
		if (s[i] == '\0')
		{
			printf("For the index %d, ft_bzero has %c but the standard function a zeroed byte", i, ft_s[i]);
		}
		i++;
	}
}

void	ft_memset_test()
{
	char ft_str[] = "abcdef";
	char str[] = "abcdef";
	int c = 'h';
	size_t len = 3;

	char *ft_result = (char *) ft_memset((void *)ft_str, c, len);
	char *result = (char *) memset((void *) str, c, len);
	int i = 0;
	while (i < 6)
	{
		if (ft_result[i] != result[i])
		{
			printf("For the index %d, ft_memset has the character %c but the standard function the character %c\n", i, ft_result[i], result[i]);
		}
		i++;
	}
}

void	ft_strlen_test()
{
	const char *s = "abcdef";

	size_t ft_result = ft_strlen(s);
	size_t result = strlen(s);

	if (ft_result != result)
	{
		printf("For the string %s ft_strlen gives %d and the standard function gives %d\n", s, (int) ft_result, (int) result);
	}

	const char *t = "";

	ft_result = ft_strlen(t);
	result = strlen(t);

	if (ft_result != result)
	{
		printf("For the string %s ft_strlen gives %d and the standard function gives %d\n", t, (int) ft_result, (int) result);
	}
}

void	ft_memcpy_test()
{
	char ft_src[] = "hello";
	char ft_dst[] = "hihihi";
	void *ft_result = ft_memcpy((void *) ft_dst, (const void *) ft_src, 3);

	char src[] = "hello";
	char dst[] = "hihihi";
	void *result = memcpy((void *) dst, (const void *) src, 3);

	if (strcmp((const char *) ft_result, (const char *) result) != 0)
	{
		printf("Ft_strlen gives %s and the standard function gives %s\n", (char *) ft_result, (char *) result);
	}
}

int	main()
{
	ft_islower_test();
	ft_isupper_test();
	ft_isalpha_test();
	ft_isdigit_test();
	ft_isalnum_test();
	ft_toupper_test();
	ft_tolower_test();
	ft_isascii_test();
	ft_isprint_test();
	ft_bzero_test();
	ft_memset_test();
	ft_strlen_test();
	ft_memcpy_test();
	printf("All tests done.\n");
	return (0);
}