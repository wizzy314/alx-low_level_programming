#include <stdio.h>

/**
 * main - the function name_type
 *
 * prints a-zA-Z
 *
 * Return: zero successfully
*/


int main(void)

{
	char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	while (i < 52)
	{
		putchar(alpha[i]);
		i++;
	}

	putchar('\n');

	return (0);
}
