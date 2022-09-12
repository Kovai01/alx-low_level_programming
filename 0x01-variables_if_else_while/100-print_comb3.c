#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
		int i;
		int j;

		for (i = 0; i < 10; i++)
		{
			/**
			 * setting the secod counter to be the value of the
			 * previous first counter
			 * this will ensure J doesnt go behind i no case of 10 or 31 0r 74
			 */
			for (j = 1; j < 10; j++)
		{
			if (i == j) /** checking if i and j are the same
				     * e.g. 00 or 66 or 88.
				     * if they are moved to the next iteration
				     */
				continue;
			putchar(i + '0');
			putchar(j + '0');

			/**
			 * this is to know when to print space and comma
			 * they shouldnt be after the last value
			 */
			if (j == 9 && i == j - 1)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
