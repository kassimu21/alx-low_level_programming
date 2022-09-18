#include <stdio.h>
/**
 * _squart - finds the square root
 * 
 * @x: input number
 * 
 * Return: square root of x
 */
int main(void)
{
	long i;
	long num = 612852475143;

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		num /= i;
	}
	printf("%li\n", num);
	return (0);
}
