#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - function to print alphabet in lowercase
 */
void print_alphabet(void)
{
int a = 'a';
while (a <= 'z')
{
_putchar(a);
a++;
}
_putchar('\n');
}
