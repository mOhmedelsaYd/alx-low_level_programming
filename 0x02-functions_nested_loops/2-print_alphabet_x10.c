#include "main.h"

/**
 * print_alphabet_x10 ->
 * a function that prints 10 times the alphabet,
 * in lowercase,
 * followed by a new line.
 *
 * Return: void (no return)
 */
void print_alphabet_x10(void)
{
char a;
int i;

for (i = 0; i < 10; i++)
{
	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
}
