#include "variadic_functions.h"

/**
 * sum_them_all - the function that sums all the variables
 * @n: variable of int
 * Return: always 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int test1;
	int test2;
	int sum = (test1 + test2);
		if (sum == 0)
			return (0);
		sum = sum_them_all(2, 98, 1024);
		printf("%d\n", sum);
		return (0);
}
