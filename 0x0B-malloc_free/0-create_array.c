#include "main.h"
#include <stdlib.h>

/**
 * create_array - function to create an array
 * @size: the size of the array
 * @c: The special char
 * Return: 0 if success
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *str;
str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);

for (i = 0; i < size; i++)
str[i] = c;
return (str);
}
