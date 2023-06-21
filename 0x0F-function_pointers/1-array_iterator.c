#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function that executes a function given as a paramete
 * @array: array
 * @size: count
 * @action: function pointer
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
return;

for (i = 0; i < size; i++)
{
action(array[i]);
}
}
