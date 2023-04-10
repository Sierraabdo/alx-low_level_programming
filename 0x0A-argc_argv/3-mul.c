#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array containing all arguments
 * Return: 0 if the program receive two arguments, or 1 if not
 */

int main(int argc, char *argv[])
{
	int m;
	int a = strtol(argv[1], NULL, 10);
	int b = strtol(argv[2], NULL, 10);

	m = a * b;

	if (argc == 3)
	{
		printf("%d\n", m);
		return (0);
	}
	else if (argc != 3)
	{
		printf("Error");
		return (1);
	}
}
