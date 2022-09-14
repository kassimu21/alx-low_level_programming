#include <stdio.h>
/**
 * main - main block
 * Description - program that prints first 50 Fibonacci numbers
 * Return: Always (Success)
 */
int main(void)
{
	int count = 0;
	long int a = 1;
	long int b = a;
	long int c = a + b;

	while (c < 4000000)
	{
	if (c % 2 == 0)
	{
	counter += c;
	}
	a = b;
	b = c;
	c = a + b;
	}
	printf("%d\n", counter);
	return (0);
}
