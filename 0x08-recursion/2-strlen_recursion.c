#include "main.h"

/**
 * _strlen_recursion - calculate the length of string
 * @s: pointer
 * Return: number of character
 */

int _strlen_recursion(char *s)
{

if (*s == 0)
{
return (0);
}
else
{
return (1 + (_strlen_recursion(s + 1)));
}

}
