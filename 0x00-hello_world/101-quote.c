#include <unistd.h>

/**
 * main - function name
 *
 * Return: successfully return 1
*/

int main(void)
{
char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, message, 42);

return (1);
}
