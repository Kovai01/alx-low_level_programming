#include "main.h"
/**
*_memcpy - The _memcpy() function copies in bytes
* the first n bytes of the memory area
* pointed to by s with the constant byte b
* @dest: area where bytes are copied to
* @src: area where bytes are copied from
* @n: number of bytes to copy
* Return: returns new value of target
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
