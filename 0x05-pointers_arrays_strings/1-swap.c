#include "main.h"

/**
 *swap_int - swaps the integers
 *@a: first int
 *@b: secnd int
 *Return: nothing
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
