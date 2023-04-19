#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: a name to be printed
 * @f: pointer to a function
 * Return: empty
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
