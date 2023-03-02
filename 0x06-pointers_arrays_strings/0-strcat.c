#include "main.h"
/**
 * _strcat - function to concat statement
 * @dest: world one
 * @src: world two
 * Return: return a character
 */
char *_strcat(char *dest, char *src)
{
int i;

for (i = 0; dest[i] != 0; i++)
_putchar(dest[i]);
_putchar(' ');
for (i = 0; src[i] != 0; i++)
_putchar(src[i]);
return (src);
}
