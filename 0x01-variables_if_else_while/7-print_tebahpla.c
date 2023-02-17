#include <stdio.h>
/* more headers goes there */

/**
* main - entry point
* Return: 0 (Success)
*/
int main(void)
{
char c;
c = 'z';
while (c >= 'a')
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}
