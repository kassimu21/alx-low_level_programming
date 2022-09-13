#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: Print athe letters of the english alphabets
 * in lowercase to the terminal
 * Return: void
 */

void print_alphabet(void)
{
	char letter = 'a';

	while(letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchr('\n');
}
