#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function to returns a pointer to newer allocated space
 * @str: the string
 * Return: pointer
 */

char *_strdup(char *str)
{
char *s;
int i, a = 0;

if (str == NULL)
return (NULL);

i = 0;
while (str[i] != '\0')
i++;

s = malloc(sizeof(char) * (i + 1));

if (s == NULL)
return (NULL);

for (a = 0; str[a]; a++)
s[a] = str[a];
return (s);
}
