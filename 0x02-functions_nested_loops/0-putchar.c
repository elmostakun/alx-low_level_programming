#include <stdio.h>
/**
 * main - main function
 * Return: 0
 */
int main(void)
{
char a[9] = "_putchar";
int i = 0;
while (i < 8)
{
putchar(a[i]);
i++;
}
putchar('\n');
return (0);
}
