#include "main.h"

/**
 * times_table - Prints the 9 times table.
 */


void times_table(void)
{

	char row, column, result;

	for (row = 0; row <= 9; row++)
/*Loop through rows (0 to 9)*/
	{

		for (column = 0; column <= 9; column++)
/*Loop through columns (0 to 9)*/
		{

			result = (row * column);
/*Calculate the product*/

			if (column > 0)
			{

				_putchar(',');
/*Print comma separator*/
_putchar(' ');
/*Print space*/
			}

		if (result < 10 || result > 10)
		{
			_putchar(' ');
/*Print space for single-digit results*/
			_putchar(result + '0');
/*Print the result as a character*/
		}

		else
		{

		_putchar((result / 10) + '0');
/*Print tens digit as a character*/
		_putchar((result % 10) + '0');
/*Print ones digit as a character*/

		}
		}

	_putchar('\n');
/* Print newline after each row*/
	}
}
