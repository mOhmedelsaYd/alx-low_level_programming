#include "main.h"
/**
 * _isdigit - check digit
 * @c: digit
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}