#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - the main function
 * @argc: the count
 * @argv: the string
 * Return: 0
 */

int main(int argc, char *argv[])
{
int res, num1, num2;

if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
res = num1 *num2;
printf("%d\n", res);
return (0);
}
