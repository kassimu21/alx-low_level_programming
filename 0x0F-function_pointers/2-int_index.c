#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array to search through
 * @size: size of the array
 * @cmp: funtion used to compare
 * Return: first index for which cmp does not return 0, or -1 if
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, r;

	if (size > 0 && array && cmp)
	{
		for (i = 0, i < size; i++)
		{
			r = cmp(array[i]);
			if (r)
				break;
		}
		if (i < size)
			return (i);
	}
	return (-1);
}
