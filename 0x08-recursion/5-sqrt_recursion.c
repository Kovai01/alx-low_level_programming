#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - a function that returns the value as a square root
 * @n: string parameter
 * Return: natural square of a root
 */
int _sqrt_recursion(int n)
{

	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_recursion(n));
}

/**
 * _sqrt - returns the square root of a number
 * @n: test number
 * @x: squared number
 * Return: the natural square of a root
 */

int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}
