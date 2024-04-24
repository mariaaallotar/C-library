
#include "tests.h"

static void	dst_size_0()
{
	char dst[10] = "initial";
	const char *src = "source";
	size_t ret_ft = ft_strlcpy(dst, src, 0);
	size_t ret_str = strlcpy(dst, src, 0);
	printf("Test: destination size 0\n");
	printf("Expected return value: %zu\n", ret_str);
	printf("Actual return value: %zu\n", ret_ft);
	printf("Expected destination string: initial\n");
	printf("Actual destination string: %s\n", dst);
}

static void	dst_size_1()
{
	char dst[10] = "initial";
	const char *src = "source";
	size_t ret_ft = ft_strlcpy(dst, src, 1);
	size_t ret_str = strlcpy(dst, src, 1);
	printf("Test: destination size 1\n");
	printf("Expected return value: %zu\n", ret_str);
	printf("Actual return value: %zu\n", ret_ft);
	printf("Expected destination string: \n");
	printf("Actual destination string: %s\n", dst);
}

static void	dst_bigger_than_src()
{
	char dst[10] = "initial";
	const char *src = "source";
	size_t ret_ft = ft_strlcpy(dst, src, 10);
	size_t ret_str = strlcpy(dst, src, 10);
	printf("Test: destination bigger than source\n");
	printf("Expected return value: %zu\n", ret_str);
	printf("Actual return value: %zu\n", ret_ft);
	printf("Expected destination string: source\n");
	printf("Actual destination string: %s\n", dst);
}

static void	dst_smaller_than_src()
{
	char dst[5] = "init";
	const char *src = "source";
	size_t ret_ft = ft_strlcpy(dst, src, 5);
	size_t ret_str = strlcpy(dst, src, 5);
	printf("Test: destination smaller than source\n");
	printf("Expected return value: %zu\n", ret_str);
	printf("Actual return value: %zu\n", ret_ft);
	printf("Expected destination string: sour\n");
	printf("Actual destination string: %s\n", dst);
}

static void	src_not_null_terminated()
{
	char dst[10] = "initial";
	const char src[6] = {'s', 'o', 'u', 'r', 'c', 'e'};
	size_t ret_ft = ft_strlcpy(dst, src, 10);
	size_t ret_str = strlcpy(dst, src, 10);
	printf("Test: source not null-terminated\n");
	printf("Expected return value: %zu\n", ret_str);
	printf("Actual return value: %zu\n", ret_ft);
	printf("Expected destination string: source\n");
	printf("Actual destination string: %s\n", dst);
}

void	ft_strlcpy_test()
{
	dst_size_0();
	dst_size_1();
	dst_bigger_than_src();
	dst_smaller_than_src();
	src_not_null_terminated();
}