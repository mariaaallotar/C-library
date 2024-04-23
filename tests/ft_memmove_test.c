
#include "tests.h"

int	check_mem(void *src, void *dest, void *expected, size_t n) {
    return (memcmp(dest, expected, n) == 0);
}

int run_test(void *src, void *dest, size_t n) {
    void *expected = malloc(n);
    // Perform copy using both implementations
    ft_memmove(dest, src, n);
    memmove(expected, src, n);
    // Check if memory content matches
    if (check_mem(src, dest, expected, n) == 1) {
		free(expected);
        return (1); //passed
    }
	free(expected);
    return (0); //fail
}

void	not_overlapping()
{
	char src1[] = "source string";
    char dest1[20];
    if (run_test(src1, dest1, sizeof(src1)) == 0)
		printf("Different results when strings NOT overlapping.\n");
}

void	overlapping()
{
	char src2[] = "destination string";
    char dest2[20];
    memcpy(dest2, src2, sizeof(src2));
    if (run_test(src2 + 5, dest2 + 3, 10) == 0)
		printf("Different results when strings overlapping.\n");
}

void	src_null()
{
	char src1[] = "";
    char dest1[20];
    if (run_test(src1, dest1, sizeof(src1)) == 0)
		printf("Different results when source is null.\n");
}

/*void	dst_null()
{
	char src1[] = "source string";
    char *dest1 = NULL;
    if (run_test(src1, dest1, sizeof(src1)) == 0)
		printf("Different results when destination is null.\n");
}
*/

void	both_null()
{
	char src1[] = "";
    char dest1[] = "";
    if (run_test(src1, dest1, sizeof(src1)) == 0)
		printf("Different results when both source and destination is null.\n");
}

void	ft_memmove_test()
{
	not_overlapping();
	overlapping();
	src_null();
	//dst_null();
	both_null();
}