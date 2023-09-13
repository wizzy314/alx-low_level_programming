#include "main.h"

/**
 * print_alphabet_x10 - Prints the a-z ten times, followed by a new line.
 */

void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
/* Repeat 10 times*/
	{

	letter = 'a';
/* Start with 'a'*/

	while (letter <= 'z')
/* Iterate through lowercase alphabet*/
	{
	_putchar(letter);
/*Print the current letter*/
	letter++;
/* Move to the next letter*/
	}

	_putchar('\n');
/* Print a new line at the end*/
	}
}
