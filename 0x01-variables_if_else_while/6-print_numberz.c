#include <stdio.h>

/**
 * main - the function name_type
 *
 * prints 1 to 9
 *
 * Return: zero successfully
*/


int main(void)

{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}

	putchar('\n');

	return (0);
}
