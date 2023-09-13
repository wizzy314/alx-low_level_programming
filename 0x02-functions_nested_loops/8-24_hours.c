#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer.
 */


void jack_bauer(void)
{

	int hour, minute;


	for (hour = 0; hour < 24; hour++)
/*Loop through hours (00 to 23)*/

	{

		for (minute = 0; minute < 60; minute++)
/* Loop through minutes (00 to 59)*/

		{

/*Print the hour and minute in the format "HH:MM"*/
			_putchar((hour / 10) + '0');
/*Print tens digit of hour*/
			_putchar((hour % 10) + '0');
/*Print ones digit of hour*/


			_putchar(':');
/*Print colon separator*/


			_putchar((minute / 10) + '0');
/*Print tens digit of minute*/
			_putchar((minute % 10) + '0');
/*Print ones digit of minute*/


			_putchar('\n');
/*Print newline*/
		}
	}
}
