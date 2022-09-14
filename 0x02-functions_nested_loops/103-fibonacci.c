#include <stdio.h>
/**
 * main - function
 *
 * Return: nothing
 */
int main(void)
{
int counter = 0;

float a = 1;
float b = a;
float c = a + b;

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
