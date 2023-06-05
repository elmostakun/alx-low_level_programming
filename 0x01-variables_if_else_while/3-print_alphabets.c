#include <stdio.h>
/**
 * main - main function
 * Return: 0
 */
int main(void)
{
char a = 'a';
char b = 'A';
while (a <= 'z')
{
putchar(a);
a++;
}
while (b < 'Z')
{
putchar(b);
b++;
}
putchar('\n');
return (0);
}
