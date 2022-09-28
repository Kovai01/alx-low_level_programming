#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion
 * @x: string parameter
 * @y: 2nd string parameter
 * Return: 0
 */
int _pow_recursion(int x, int y)
{

	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	_pow_recursion (x, y);
}
