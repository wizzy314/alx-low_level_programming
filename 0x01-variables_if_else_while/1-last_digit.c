#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function name type
 *
 * Return: successfully returns 0
*/


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int last_d_n = n % 10;

	if (last_d_n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_d_n);
	}
	else if (last_d_n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_d_n);
	}
	else if ((last_d_n < 6) && (last_d_n != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_d_n);
	}

	return (0);
}
