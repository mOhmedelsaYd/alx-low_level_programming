#include "main.h"

/**
 * _pow_recursion - power of number
 * @x: num
 * @y: power
 * Return: intger
 */
int _pow_recursion(int x, int y)
{
if (y >= 0)
{
if (y == 0)
return (1);
else if (y % 2 == 0)
return (_pow_recursion(x, y / 2) * _pow_recursion(x, y / 2));
else if (y % 2 != 0 && y > 0)
return (x * _pow_recursion(x, y - 1));
}
else
return (-1);
}
