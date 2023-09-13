#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number and returns its value.
 * @n: The number to extract the last digit from.
 *
 * Return: The value of the last digit.
 */


int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
/* Calculate the last digit using modulo*/
	if (last_digit < 0)
	last_digit = -last_digit;
/* Ensure it's positive*/
	_putchar('0' + last_digit);
/* Print the last digit as a character*/

	return (last_digit);
/* Return the value of the last digit*/
}
