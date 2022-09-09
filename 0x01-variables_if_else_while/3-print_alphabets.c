#include <stdio.h>

/**
 * main -print alphabet in lower and upercase
 *
 *
 * Return: (0) Success
 */
int main(void)
{
char ch;

for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
for (ch = 'A' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
putchar('\n');
return(0);
}
