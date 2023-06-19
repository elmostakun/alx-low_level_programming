#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * new_dog -  function that creates a new dog
 * @name: input
 * @age: input
 * @owner: owner
 * Return: NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
int len1, len2;

len1 = strlen(name);
len2 = strlen(owner);

d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);

d->name = malloc(sizeof(char) * (len1 + 1));
if (d->name == NULL)
{
free(d);
return (NULL);
}

d->owner = malloc(sizeof(char) * (len2 + 1));
if (d->owner == NULL)
{
free(d);
free(d->name);
return (NULL);
}
strcpy(d->name, name);
strcpy(d->owner, owner);
d->age = age;
return (d);
}
