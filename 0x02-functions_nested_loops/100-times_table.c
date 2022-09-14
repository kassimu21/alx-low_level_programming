#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints nxn times table
 * @n: maximum multiple of times tabe
 *
 * Description: This will print a times table formed by nxn multiplications.
 * where n can be any number from 0 to 15.
 * Return: Always return n
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
			c = a * b;
				_putchar(44);
				_putchar(32);
			if (c <= 9)
			{
				_putchar(32);
				_putchar(32);
				_putchar(c + 48);
			}
			else if (c <= 99)
			{
				_putchar(32);
				_putchar((c / 10) + 48);
				_putchar((c % 10) + 48);
			}
			else
			{
				_putchar(((c / 100) % 10) + 48);
				_putchar(((c / 10) % 10) + 48);
				_putchar((c % 10) + 48);
			}
			}
			_putchar('\n');
		}
	}
}
