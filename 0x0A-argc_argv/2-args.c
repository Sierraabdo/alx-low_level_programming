#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments
 * @argc: number of arguments
 * @argv: array containing all arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	printf("\n");
	return (0);
}
