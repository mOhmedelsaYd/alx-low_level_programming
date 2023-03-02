#include "main.h"
/**
 * _strncat - functon to copy string
 * @dest: the argument will copied in it
 * @src: the argument will copied
 * @n: number of character will copied from argument two
 * Return: return character
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;

for (i = 0; dest[i] != 0; i++)
;
for (j = 0; j < n; j++)
{
dest[i++] = src[j];

}
dest[i++] = '\0';
return (dest);
}
