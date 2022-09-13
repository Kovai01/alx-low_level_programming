#include <ctype.h>
#include "main.h"

/**
 * _islower - Check if character is lowercase
 * @r: character to be checked
 * Return: returns 1 if character is lowercase, 0 if it isn't
 */
int _islower(int r)
{
	if (islower(r) == 0)
		return (0);
	else
		return (1);
}
