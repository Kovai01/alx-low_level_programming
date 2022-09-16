#include <ctype.h>
#include "main.h"

/**
 * _isupper - Check if character is uppercase
 * @r: character to be checked
 * Return: returns 1 if character is uppercase, 0 if it isn't
 */
int _isupper(int r)
{
	if (isupper(r) == 0)
		return (0);
	else
		return (1);
}
