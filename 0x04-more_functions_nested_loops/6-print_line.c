#include "main.h"
/**
 * print_line - print under score
 * @n: numbr of line
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
