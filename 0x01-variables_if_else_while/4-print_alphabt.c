#include <stdio.h>

/**
 * main - the function name_type
 *
 * prints lower case a-z except q and e
 *
 * Return: zero successfully
*/


int main(void)

{
	char s_alpha[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
	putchar(s_alpha[i]);
}

	putchar('\n');

	return (0);
}
