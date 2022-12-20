#include "main.h"
#include "2-strlen.c"

/**
 **_strcpy - function to copy
 *@dest: copy destination
 *@src: pointer to data to be copied
 *Return: Return dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
