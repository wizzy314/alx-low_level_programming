#include <stdio.h>

/**
 * main - the function name_type
 *
 * prints possible combinations of single dogits
 *
 * Return: zero successfully
*/


int main(void)

{
	int n;

	for (n = 0; n <= 9; n++)
	{

		putchar(n + '0');
		if (n != 9)
		{
		putchar(',');
		putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
