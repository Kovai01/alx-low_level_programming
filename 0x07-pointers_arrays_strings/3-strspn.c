#include "main.h"
/**
 * _strspn - Returns the number of bytes in the initial segment
 * the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: initial segment
 * @accept: cource of bytes
 * Return: returns the number of bytes in the initial
 * segment of s which consist of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				bytes++;
				break;
			}
			else if ((accept[i + 1]) == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
