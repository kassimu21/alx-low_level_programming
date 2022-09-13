#include <stdio.h>
#include "main.h"

/**
 * main - Program entry point
 *
 * Description: Print alphabets in lowercase
 *
 * Return: void
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');
}
