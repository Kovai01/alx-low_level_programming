#include "main.h"
#include <ctype.h>

/**
 * _isdigit - check the digit.
 *
 * @c: return int type
 *
 * Return: Always 0.
 */
int _isdigit(int c)
{
	int i = isdigit(c);

	if (i > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
