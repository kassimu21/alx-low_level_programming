#include <stdio.h>
/**
 * main - Prints out the largest prime factor of 612852475143
 * Return: return 0 with success.
 */
int main(void)
{
	long i;
	long num = 612852475143;
	
	while (i++ < num /2)
	{
	if (num % i == 0)
	{
		num /= 2;
		continue;
	}
	for (i = 3; i < num / 2; i += 2)
	{
		if (num % i == 0)
			num / = i;
	}
	}
	printf("%ld\n", num);
	return (0);
}
