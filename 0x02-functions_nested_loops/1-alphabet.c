#include "main.h"

/**
 * main - check code
 *
 * Description: print alphabet in lower case
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char letter = 'a';
	
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
}
