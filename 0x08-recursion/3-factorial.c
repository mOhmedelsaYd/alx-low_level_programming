#include "main.h"

/**
 * factorial - factorial of num
 * @n: number
 * Return: int
 */

int factorial(int n)
{
if (n == 1)
return (1);
else if (n < 1)
return (-1);
else
return (n * factorial(n - 1));
}
