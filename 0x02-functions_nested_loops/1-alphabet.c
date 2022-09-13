#include "main.h"

/**
 * main - Entry point
 *
 * Description: print alphabet in lower case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		letter++;
	}

	putchar('\n');
	return (0);
}
