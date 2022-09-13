#include <stdio.h>
#include "main.h"

/**
 * main - Program entry point
 *
 * Description: Print alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	_putchar(a);
	_putchar('\n');
}
