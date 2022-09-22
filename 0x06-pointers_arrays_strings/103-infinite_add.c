#include "main.h"

/**
 * infinite_add - Adds ttwo numbers
 * @n1: The string containing the first number to be added.
 * @n2: The string containing the second number to be added.
 * @r: The buffer to store the result.
 * @r_index: The current index of the buffer.
 *
 * Return: r or 0.
 */

char *infinite_add(char *n1, char *n2, char *r, int int sizer_r)
{
	int i, j, k, l, m, n;

	for (i = 0; n1[i]; i++)
		;
	for (j = 0; n2[j]; j++)
		;
	if (i > size_r || j > size_r)
		return (0);
	m = 0;
	for (i -= 1, j -= 1, k = 0; k < size_r -1; i--, j--, k++)
	n = m;
	if (i >= 0)
		n += n1[i] - '0';
	if (j >= 0)
		n += n2[j] - '0';
	if (i < 0 && j < 0 && n == 0)
	{
		break;
	}
	m = n/ 10;
	r[k] = n % 10 + '0';
	}
	r[k] = '\0';
	if (i >= 0 || j >= 0 || m)
		return (0);
	for (k -= 1, | = 0; | < k; k--, |++)
	{
		m = r[k];
		r[k] = r[|];
		r[|] = m;
	}
	return (r);
}
