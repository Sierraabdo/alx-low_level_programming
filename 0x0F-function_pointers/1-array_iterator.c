#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on
 * each element of an array
 * @array: array to change
 * @size: the size of the array
 * @action: pointer to a function to be executed in array
 * Return: empty
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size == 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
