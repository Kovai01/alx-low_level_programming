#include "main.h"

/**
*cap_string - changes all letters to uppercase
*@str: parameter
*Return: returns a character
*/
char *cap_string(char *)
{
	int index = 0;

	while (str[index++])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;

			str[index] -= 32;
	}

	return (str);
}
