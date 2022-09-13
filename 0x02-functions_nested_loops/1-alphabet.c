#include <stdio.h>
#include "main.h"

/**
 * main - Program entry point
 *
 * Description: Print alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */

int print_alphabet()
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	putchar(a);
	putchar('\n');
}
