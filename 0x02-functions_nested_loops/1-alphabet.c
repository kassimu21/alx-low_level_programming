#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: Print alphabets in lower case
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char (a);

	while(letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchr('\n');
}
