#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from input to 98, in order
 * seperated by a comma followed by a space.
 * @n: The number begin counting at.
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			if (n == 98)
			{
			printf("%d\n", n);
			}
			else
			{

			printf("%d, ", n);
			}
			n--;
		}
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			if (n == 98)
			{

			printf("%d\n", n);
			}
			else
			{
			printf("%d, ", n);
			}
			n++;
		}
	}
		else if (n == 98)
	{
		printf("%d\n", n);
	}
}
