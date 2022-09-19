#include "main.h"
#include <stdio.h>

/**
 * reset to 98 - resets the code to 98
 *
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n" n);
	return (0);
}
