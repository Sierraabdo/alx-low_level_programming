#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the program
 * @argc: the number of argument of program
 * @argv: the array containing alla argument of program
 * Return: always 0.
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s", argv[0]);
	printf("\n");
	return (0);
}
