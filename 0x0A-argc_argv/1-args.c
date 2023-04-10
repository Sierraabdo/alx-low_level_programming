#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: the number of arguments of program
 * @argv: an array containing all arguments of programm
 * Return: always 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d", (argc - 1));
	printf("\n");
	return (0);
}
