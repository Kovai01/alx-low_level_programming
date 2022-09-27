#include "main.h"
/**
*_strpbrk - locates the first occurrence in the string
* @s: string targeted
* @c: character targeted
* @accept: the recieving target
* Return: returns a pointer to the target
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}
		return ('\0');
}
