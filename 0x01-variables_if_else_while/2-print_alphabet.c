#include <stdio.h>

/**
 * main - the function name_type
 *
 * prints lower case a-z
 *
 * Return: zero successfully
*/


int main(void)

{
	char s_alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
		putchar(s_alpha[i]);
		i++;
	}

	putchar('\n');

	return (0);
}
