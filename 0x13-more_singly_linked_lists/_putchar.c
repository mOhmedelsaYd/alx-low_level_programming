#include "main.h"
#include <unistd.h>
/**
 * _putchar - write character c to stdout
 * @c: the character to print
 *
 * Return: On success 1
 * Onerror, 1is returned, and errno is set appropriately
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
