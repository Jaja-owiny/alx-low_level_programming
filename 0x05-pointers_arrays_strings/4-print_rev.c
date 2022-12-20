#include "main.h"
#include "2-strlen.c"

/**
 *print_rev - reverses a string
 *@s: string to be reversed
 */

void print_rev(char *s)
{
	int i;

	for (i = _strlen(s); i >= 0; i--)
	{
		putchar(*(s + i));
	}
	putchar('\n');
}

