#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line
 * Return: void/no return value
 */


void print_alphabet(void)
{
	char letter = 97;
	/** ASCII value for 'a'*/

	while (letter <= 122)
	/** ASCII value for 'z'*/
	{


		_putchar(letter);
	/** Print the current letter*/


		letter++;
	/** Move to the next letter*/
	}

	_putchar('\n');
/**Print a new line at the end*/
}
