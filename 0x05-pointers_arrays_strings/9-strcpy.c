#include "main.h"
#include "2-strlen.c"
/**
 * *_strcpy - copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 * Description: Copy the string pointed to by pointer 'src' to
 * the buffer pointed to 'dest'
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; i <= _strlen (src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
