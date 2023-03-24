#include "main.h"

/**
 * print_numbers - Prints the numbers since 0 up to 9
 * Return: void
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
