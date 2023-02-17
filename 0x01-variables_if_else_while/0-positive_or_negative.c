#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - entry function
 * Return: 0 (Sucess)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("is positive");
else if (n < 0)
printf("is positive");
else
printf("is zero");

return (0);
}
