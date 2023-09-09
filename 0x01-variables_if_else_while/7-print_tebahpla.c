#include <stdio.h>

/**
 * main - the function name_type
 *
 * prints lower case z-a
 *
 * Return: zero successfully
*/


int main(void)

{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}

	putchar('\n');

	return (0);
}
