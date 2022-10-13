#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator -  it prints arrays
 * @array: the array creation
 * @size: the size of the array
 * @action: action mark
 * Return: return code
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
