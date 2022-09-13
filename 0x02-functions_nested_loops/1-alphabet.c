#include <stdio.h>

/**
 * print_alphabet - function to print alphabet in lower case
 *
 * Description: print alphabet in lower case
 *
 * Return: Always 0 (Success)
 */
void print_alphabet()
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
