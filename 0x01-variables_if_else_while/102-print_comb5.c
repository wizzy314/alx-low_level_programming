#include <stdio.h>

/**
 * main - the function name_type
 *
 * prints comb of 2digits with any form of repitition
 *
 * Return: zero successfully
*/


int main(void)

{
	int n, m;

	for (n = 0; n <= 99; n++)
	{
		for (m = n + 1; m <= 99; m++)
		{
		putchar((n / 10) + '0');
		putchar((n % 10) + '0');
		putchar(' ');
		putchar((m / 10) + '0');
		putchar((m % 10) + '0');
			if (n < 98 || m != 99)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}


	putchar('\n');

	return (0);
}
