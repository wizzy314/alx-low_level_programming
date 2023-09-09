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

	for (n = 0; n <= 9; n++)
	{
		for (m = n + 1; m <= 9; m++)
		{
		putchar(n + '0');

		putchar(m + '0');

		if (n != 9 || m != 9)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}


	putchar('\n');

	return (0);
}
