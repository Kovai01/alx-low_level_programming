#include "main.h"
#include <stdio.h>

/**
 * factorial - gives factorial of an integer
 * @n: string parameter
 * Return: 0
 */
int factorial(int n)
{
	int next;

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);

	next = factorial(n - 1);
	return (n * next);
}
