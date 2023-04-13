#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: the size
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	p = malloc(l);

	while (i < l)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
