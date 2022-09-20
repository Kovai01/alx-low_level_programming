#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * puts2 - prints every other character
 * @str: string parameter
 * Return: 0
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			putchar(str[i]);
		i++;
	}

	putchar('\n');
}
