#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all
 * @n: number of argyments
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{

va_list args;
unsigned int i, value = 0;


va_start(args, n);

if (n == 0)
{
return (0);
}
for (i = 0; i < n; i++)
{
value += va_arg(args, int);
}
va_end(args);
return (value);
}
