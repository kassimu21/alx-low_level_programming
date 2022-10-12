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
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0, i < size; i++)
			if = cmp(array[i]);
				return (i);
	}

	return (-1);
}
