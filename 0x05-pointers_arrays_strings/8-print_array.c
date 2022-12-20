#include "main.h"
#include "2-strlen.c"

/**
 *print_array - Displays the array
 *@a: pointer to array
 *@n: how many times to print
 *Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(",");
	}
	printf("\n");
}
