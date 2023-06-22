#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all arguments
 * @n: number of argyments
 * @...: A variable number of paramters to calculate the sum of
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
