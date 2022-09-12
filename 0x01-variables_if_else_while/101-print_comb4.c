#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
* description - characters to be printed by comma and space
* last character should be a combination of different digits
* 011,110,101 are considered same combination and the least should be printed
* Return: Always 0 (Success)
*/
int main(void)
{
		/* declaring the three counter variables*/
		int i;
		int j;
		int k;

		for (i = 0; i < 10; i++)
		{
			/**
			 * setting the second counter to be the value of the
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
			for (k = j; k < 10; k++)
			{
				if (j == k)
					continue;
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

			/**
			 * this is to know when to print space and comma
			 * they shouldnt be after the last value
			 */
			if (k == 9 && j == k - 1 && i == j - 1)
				continue;
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
