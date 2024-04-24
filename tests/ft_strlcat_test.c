
#include "tests.h"

static void dstsize_zero()
{
    char dst[10] = "initial";
    const char *src = "source";
    size_t ret_ft = strlcat(dst, src, 0);
    size_t ret_str = strlcat(dst, src, 0);
    printf("Test: destination size is 0\n");
    printf("Expected return value: %zu\n", ret_str);
    printf("Actual return value: %zu\n", ret_ft);
    printf("Expected destination string: initial\n");
    printf("Actual destination string: %s\n", dst);
}

static void dstsize_one()
{
    char dst[10] = "i";
    const char *src = "source";
    size_t ret_ft = strlcat(dst, src, 1);
    size_t ret_str = strlcat(dst, src, 1);
    printf("Test: destination size is 1\n");
    printf("Expected return value: %zu\n", ret_str);
    printf("Actual return value: %zu\n", ret_ft);
    printf("Expected destination string: i\n");
    printf("Actual destination string: %s\n", dst);
}

static void dstsize_larger()
{
    char dst[20] = "initial";
    const char *src = "source";
    size_t ret_ft = strlcat(dst, src, 20);
    size_t ret_str = strlcat(dst, src, 20);
    printf("Test: destination size is larger than the concatenated string\n");
    printf("Expected return value: %zu\n", ret_str);
    printf("Actual return value: %zu\n", ret_ft);
    printf("Expected destination string: initialsource\n");
    printf("Actual destination string: %s\n", dst);
}

static void dstsize_smaller()
{
    char dst[5] = "init";
    const char *src = "source";
    size_t ret_ft = strlcat(dst, src, 5);
    size_t ret_str = strlcat(dst, src, 5);
    printf("Test: destination size is smaller than the concatenated string\n");
    printf("Expected return value: %zu\n", ret_str);
    printf("Actual return value: %zu\n", ret_ft);
    printf("Expected destination string: init\n");
    printf("Actual destination string: %s\n", dst);
}

static void src_not_null_terminated()
{
    char dst[20] = "initial";
    const char src[] = {'s', 'o', 'u', 'r', 'c', 'e'};
    size_t ret_ft = strlcat(dst, src, 20);
    size_t ret_str = strlcat(dst, src, 20);
    printf("Test: source is not null-terminated\n");
    printf("Expected return value: %zu\n", ret_str);
    printf("Actual return value: %zu\n", ret_ft);
    printf("Expected destination string: initialsource\n");
    printf("Actual destination string: %s\n", dst);
}

void	ft_strlcat_test()
{
	dstsize_zero();
    dstsize_one();
    dstsize_larger();
    dstsize_smaller();
    src_not_null_terminated();
}