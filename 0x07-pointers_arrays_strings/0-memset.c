#include "main.h"

/**
 * _memset - fills the first byte
 * @n: first byte to be filled
 * @s: second byte to be filled
 * @b: the byte to replace s
 * Return: always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] == b;
		n--;
	}
	return (s);
}
