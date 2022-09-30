#include "main.h"

/**
 * _strlen - Returns the lenght of a string.
 * @str: string.
 *
 * Return:Lenght
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
