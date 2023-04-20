#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all of the parameters of the function
 * @n: the number of parameters
 * Return: 0 if n == 0, sum if n != 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0, x;
	va_list c;

	if (n == 0)
		return (0);

	va_start(c, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(c, int);
		sum = sum + x;
	}
	va_end(c);
	return (sum);
}
