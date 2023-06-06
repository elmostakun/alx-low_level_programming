#include <stdio.h>
/**
 * main - main function
 * Return: 0
 */
int main(void)
{
int a = 0;
while (a <= 9)
{
putchar(48 + a);
if (a != 9)
{
putchar(',');
putchar(' ');
}
a++;
}
putchar('\n');
return (0);
}
