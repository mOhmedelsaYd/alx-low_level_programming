#include <stdio.h>
/* more headers goes there */

/**
* main - entry point
* Return: 0 (Success)
*/
int main(void)
{
char c;
int d;
for (d = 0; d < 10; d++)
{
putchar(d + '0');
}
for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
