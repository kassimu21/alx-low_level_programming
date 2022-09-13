#include <stdio.h>
#include "main.h"

/**
 * main - Program entry point
 *
 * Description: Print alphabets in lowercase
 *
 * Return: void
 */

void  print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');
}
