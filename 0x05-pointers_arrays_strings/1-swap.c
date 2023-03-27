#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers
 * @a: The first number to swap
 * @b: The second number to swap
 * Return: Empty
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
