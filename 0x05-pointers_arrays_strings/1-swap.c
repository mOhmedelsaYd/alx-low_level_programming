#include "main.h"
/**
 * swap_int - swap value
 * @a: first value
 * @b: second value
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
