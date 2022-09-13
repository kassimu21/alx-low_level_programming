#include <stdio.h>
#include "main.h"
/**
 * _putchar - Display to std out
 * c: parameter to compare
 * Return: 1 or 0
 */
 int _putchar(char c);
 /**
 * int - a data type to specify the kind of value that is used in the function
 * _putchar - the "_" before the putchar is used when declaring a function
 * (char *c) - is the arguments passed
 */

void print_alphabet(void)
{
	char letter = 'a';

	while(letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
