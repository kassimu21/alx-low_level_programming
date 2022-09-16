#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
unsigned int num = n;

/*first check if its negative*/
if (n < 0)
{
_putchar('-');
num = -num;
}
/*print the first few digits*/
if ((num / 10) > 0)
print_number(num / 10);
/*print the last digit*/
-putchar((num % 10) + 48);
}
