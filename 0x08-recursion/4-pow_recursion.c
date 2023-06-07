#include "main.h"
/**
 * _pow_recursion - function that return the value of an input
 * @x: input
 * @y: pow
 * Return: the value of x
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
