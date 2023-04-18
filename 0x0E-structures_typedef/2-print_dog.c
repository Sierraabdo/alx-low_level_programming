#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog
 * Return: empty
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)");
		else
			printf("Name: %s", d->name);
		if (d->age == 0)
			printf("\nAge: (nil)");
		else
			printf("\nAge: %f", d->age);
		if (d->owner == NULL)
			printf("\nOwner: (nil)");
		else
			printf("\nOwner: %s", d->owner);
	}
	printf("\n");
}
