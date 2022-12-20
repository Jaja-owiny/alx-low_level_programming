#include <unistd.h>

/**
 *_putchar - writes the character c to stdout
 *@c: Character to print
 *Return: Return 1 (success)
 *on error, -1 is retured
 */

int _putchar(char c);
{
	return (write(1, &c, 1));
}
