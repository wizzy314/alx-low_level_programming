#include <stdio.h>

void before_main(void) __attribute__ ((constructor));

/**
 * before_main - Function to be executed before main.
 */

void before_main(void)
{
			printf("You're beat! and yet, you must allow,\nI ");
			printf("bore my house upon my back!\n");
}

/**
 * main - The main function.
 *
 * Return: Always 0.
 */

int main(void)
{
			printf("(A tortoise, having pretty good sense of a hare's ");
			printf("nature, challenges one to a race.)\n");
			return (0);
}
