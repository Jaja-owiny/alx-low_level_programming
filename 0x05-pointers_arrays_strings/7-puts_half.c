#include  "main.h"
#include "2-strlen.c"

/**
 *puts_half - puts half of char
 *@str: String to be split
 *Return: nothing
 */
void puts_half(char *str)
{
	int i;
	int oE = 0;

	if (_strlen(str) % 2 != 0)
	{
		oE++;
	}
	for (i = (_strlen(str) + oE) / 2; i < _strlen(str); i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}

