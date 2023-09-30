#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all -  sum all arguments
 * @n: int, number of undefined arguments
 *
 * Return: sum of args
 * On error, 0 is returned
 */
int sum_them_all(const unsigned int n, ...)
{
  va_list list;
  unsigned int a, sum = 0;
  va_start(list, n);
  if (n != 0)
    for (a = 0; a < n; sum += va_arg(list, unsigned int), a++)
      ;
  va_end(list);
  return (sum);
}
