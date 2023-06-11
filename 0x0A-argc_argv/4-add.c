#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - main function
 * @argc: coount
 * @argv: string
 * Return: 0 success, 1 fail
 */

int main(int argc, char *argv[])
{
int res, i;
int num;
i = 1;
res = 0;
while (i < argc)
{
if (isdigit(argv[i][0]))
{
num = atoi(argv[i]);
res += num;
}
else
{
printf("Error\n");
return (1);
}
i++;
}
printf("%d\n", res);
return (0);
}
