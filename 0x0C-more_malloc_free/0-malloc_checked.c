#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function to allocate memory
 * @b: the size to allocate
 * Return: allocate memory
 */

void *malloc_checked(unsigned int b)
{
unsigned int *p;
p = malloc(b);

if (p == NULL)
{
printf("98\n");
}
return (p);
}
