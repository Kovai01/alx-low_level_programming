#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks if the character is an alphabet
 * @c: is the parameter used
 * Return: if it is an alphabet then 1 if not then 0
 */
int _isalpha(int c)
{
	if (isalpha(c) == 0)
		return (0);
	else
		return (1);
}
