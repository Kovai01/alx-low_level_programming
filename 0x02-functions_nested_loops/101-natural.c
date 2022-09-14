#include "main.h"
#include <stdio.h>

/**
 * find_multiples - finds the multiples of 3 and 5
 * @n: multiples of 3 and 5
 * Return: multiples of 3 and 5 below 1024
 */
void find_multiples(int n)
{
	while ((n = 1); (n <= 1024); n++)
	{
		if (n % 15 == 0) 
		{
			printf("Multiples of 3 and 5\n");
		}
		else if (n % 5 == 0)
		{
			printf("Multiples of 5\n");
		}
		else if (n % 3 == 0)
		{
			printf("Multiples of 3\n");
		}
		else
		{
			printf("%d\n", n);
		}
	puts(" ");
	}
}
