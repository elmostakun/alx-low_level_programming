#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: the string between the arguments
 * @n: the number of arguments
 * @...: @...: A variable number of paramters to calculate the sum of
 * Return: VOid
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

va_start(args, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}

printf("\n");
va_end(args);
}
