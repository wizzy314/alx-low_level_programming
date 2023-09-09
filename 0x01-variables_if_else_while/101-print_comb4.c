#include <stdio.h>

/**
 * main - the function name_type
 *
 * prints comb of 2-2 digits with any form of repitition
 *
 * Return: zero successfully
*/


int main(void)

{
	int n, m, l;

	for (n = 0; n <= 9; n++)
	{
		for (m = n + 1; m <= 9; m++)
		{
		for (l = m + 1; l <= 9; l++)
		{
		putchar(n + '0');
		putchar(m + '0');
		putchar(l + '0');
		if (n != 9 || m != 9 || l !=  9)
			{
			putchar(',');
			putchar(' ');
			}
		}
		}
	}


	putchar('\n');

	return (0);
}
