#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int s, p;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (s = 1; s <= n; s++)
		{
			for (p = 1; p < s; p++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
