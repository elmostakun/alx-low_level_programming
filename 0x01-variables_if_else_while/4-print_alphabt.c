#include <stdio.h>
/**
 * main - main function
 * Return: 0
 */
int main(void)
{
char a = 'a';
while (a <= 'z')
{
if (a == 'e' || a == 'q')
{
a++;
continue;
}
putchar(a);
a++;
}
putchar('\n');
return (0);
}
