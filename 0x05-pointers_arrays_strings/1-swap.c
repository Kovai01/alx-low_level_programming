#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the code
 * temp - used to swaap
 * @a: it is the first parameter
 * @b: it is the second parameter
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
