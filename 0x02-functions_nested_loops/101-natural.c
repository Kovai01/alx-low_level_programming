#include "main.h"
#include <stdio.h>

/**
 * find_multiples - finds the multiples of 3 and 5
 * @i: multiples of 3 and 5
 * Return: multiples of 3 and 5 below 1024
 */
void find_multiples(int i)

	for (int i = 1; i <= 1024; i++)
{
	if (i % 15 == 0)
		printf("Multiples of 3 and 5\n");
	else if (i % 5 == 0)
		printf("Multiples of 5\n");
	else if (i % 3 == 0)
		printf("Multiples of 3\n");
	else
		printf("%d\n", i);
	puts("");
}
