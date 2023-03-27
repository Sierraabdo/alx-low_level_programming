#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: The string to print
 * Return: Empty
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
