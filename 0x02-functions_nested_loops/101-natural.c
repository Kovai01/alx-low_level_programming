#include "main.h"
#include <stdio.h>

/**
 * find_multiples - finds the multiples of 3 and 5
 * @n: multiples of 3 and 5
 * Return: multiples of 3 and 5 below 1024
 */
int main(void)
{
	int n, sum = 0
	if (n = 0; n <= 1024; n++;)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
