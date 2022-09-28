#include "main.h"
#include <stdio.h>

/**
 * _is_prime_number - a function that prints prime numbers
 * @n: string parameter
 * Return: 0
 */
int is_prime_number(int n)
{

	if (n == 1 || n == 0)
		return (0);
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		return (0);
	}
	return (1);
}

int main()
{
	int N = 100;

	for (int i = 1; i <= N; i++)
	{
		if (is_prime_number(1))
			;
	}
	return (0);
}
