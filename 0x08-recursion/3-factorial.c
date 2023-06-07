#include "main.h"
/**
 * factorial - function that return the factorial number
 * @n: The input
 * Return: the factorial
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else

n = n *factorial(n - 1);

return (n);
}
