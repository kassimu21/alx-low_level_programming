#include "main.h"
/**
 * _strspn - gets length of prefix substring
 * @s: initial segment
 * @accept: accepted byte.
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j; bool;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		bool = 1;
		if (j = 0; *(accept  + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (i);
}
