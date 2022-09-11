#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - this is the main function
* description - the starting point of the program
* return: returns zero if no errors and non-zero if error
*/

int main(void)

{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;

		if (n > 0)
			printf("%d is positive\n", n);
		else
			if (n == 0)
				printf("%d is zero\n", n);
			else
				printf("%d is negative\n", n);
		return (0);
}
