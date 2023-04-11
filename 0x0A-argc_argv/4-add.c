#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array containing all arguments
 * Return: 0 or 1 if on number contains symbols that are not digits
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int sum = 0;
	char *e;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			e = argv[i];
			if (e[i] > 48 && e[i] < 57)
			{
				sum += atoi(e);
				e++;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
