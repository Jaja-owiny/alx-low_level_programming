#include "main.h"
#include "2-strlen.c"

/**
 *puts2 - puts string twice
 *@str: string thats put twice
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
