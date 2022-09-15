#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: size of the triangle
 * Return: triangle of '#'s
 */
void print_triangle(int size)
{
	int s, r, t;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 0; r <= (size - 1); r++)
		{
			for (s = 0; s < (size - 1) - r; s++)
			{
				_putchar(' ');
			}
			for (t = 0; t <= r; t++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
