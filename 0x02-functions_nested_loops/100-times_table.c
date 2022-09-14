#include "main.h"

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
	int i;
	int j;

	for (n <= 15; &&; n >=0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j =0; j <= n; j++)
			{
				int prod = j * i;

				if (j == 0)
				{	
					_putchar('0');
				}
				else if (prod <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					-putchar(' ');
					_putchar('0' + prod);
				}
				else if (prod > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (prod / 100));
					_putchar('0' + ((prod / 10) % 10));
					_putchar('0' + (prod % 10));
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (prod / 10));
					_putchar('0' + (prod % 10));
				}
			}
			_putchar('\n');
		}
	}
}
