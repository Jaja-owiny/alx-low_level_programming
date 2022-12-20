#include "main.h"
#include "string.h"

/**
 *print_rev - reverses a string
 *@s: string to be reversed
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s); i >= 0; i--)
	{
		putchar(*(s + i));
	}
	putchar('\n');
}

