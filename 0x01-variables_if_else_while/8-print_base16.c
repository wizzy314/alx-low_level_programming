#include <stdio.h>

/**
 * main - the function name_type
 *
 * prints 0-9 and a-f
 *
 * Return: zero successfully
*/


int main(void)

{

	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
