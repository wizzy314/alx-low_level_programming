#include "main.h"

/**
 * print_sign - Prints the sign of a number and returns a specific value.
 * @n: The number to check.
 *
 * Return:
 * 1 and print '+' if n is greater than zero
 * 0 and print '0' if n is zero
 * -1 and print '-' if n is less than zero
 */

int print_sign(int n)
{

	if (n > 0)
	{
	_putchar('+');
/* Print '+' if n is greater than zero*/
	return (1);
/* Return 1*/
}


	else if (n == 0)
{
	_putchar('0');
/* Print '0' if n is zero*/
	return (0);
/* Return 0*/
}


	else
{
	_putchar('-');
/* Print '-' if n is less than zero*/
	return (-1);
/* Return -1*/
}

}
