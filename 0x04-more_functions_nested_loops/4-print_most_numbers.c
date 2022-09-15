#include "main.h"

/**
 * print_most_numbers - prints the most numbers
 * 
 * Description: prints out numbers from 0 to 9 to
 * terminal except the numbers 2 and 4.
 * Return: 0
 */

void print_most_numbers(void)
{
	char i = 0;
	
	while (i <= 9)
	{
		if (i != 2 && i != 4)
		{
			_putchar('0' + i);
		}
		
		i++;
	}
	_putchar('\n');

}
