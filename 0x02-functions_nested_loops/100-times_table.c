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
	int prod, mult, num;
	
	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; ++num)
		{
			_putchar(48);
			for (mult = 1; mult <= n; ++mult)
			{
				_putchar(',');
				_putchar(' ');
			
				prod = num * mult;
				
				if (prod <= 9)
					_putchar(' ');
				if (prod <= 99)
					_putchar(' ');
				
				if (prod >= 100)
				{
					_putchar((prod / 100) + 48);
					_putchar((prod / 10) % 10 + 48);
				}
				else (prod <= 99 && prod >= 10)
					_putchar((prod / 10) + 48);
					_putchar((prod % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
