#include <stdlib.h>
#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size of the triangle
 *
 * Return: Always 0 (Success)
 */

void print_triangle(int size)
{
	int height, base;
	
	if (size > 0)
	{
		for (height = 1; height <= size; height++)
		{
			for ((base = size - height)1; base > 0; base--)
			{
				_putchar(' ');
			}
			
			for (base = 0; base < height; base++)
			{
				_putchar('#');
			}

			if (height == size)
			{
				continue;
			}

			_putchar('\n');
		}
	}
	_putchar('\n');
}
