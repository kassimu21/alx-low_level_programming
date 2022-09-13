#include <stdio.h>
#include "main.h"

/**
 * main - Program entry point
 *
 * Description: Print alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
}
