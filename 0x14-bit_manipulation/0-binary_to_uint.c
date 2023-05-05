#include "main.h"
#include <string.h>
/**
 * binary_to_uint - converts a binary string to an unsigned int
 *
 * @b: pointer to a string containing the binary number to convert
 *
 * Return: the decimal value of the binary number represented by the string,
 *         or 0 if the input string is NULL or contains invalid characters
 */

unsigned int binary_to_uint(const char *b)
{
int strl = 0;
int total = 0;
int decval = 1;
int i;

while (b[strl])
strl++;
if (b == NULL)
return (0);
for (i = (strl - 1); i >= 0; i--)
{
if (b[i] == '1')
total += decval;
decval *= 2;
}

return (total);
}
