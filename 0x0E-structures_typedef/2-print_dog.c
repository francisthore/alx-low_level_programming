#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the name, age and owner of a dog
 * @d: strucure of a dog
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL && d->owner != NULL)
	{
		printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
	}
	else if (d->name == NULL)
		printf("Name: (nil)\nAge: %.6f\nOwner: %s\n", d->age, d->owner);
	else if (d->owner == NULL)
		printf("Name: %s\nAge: %.6f\nOwner: (nil)\n", d->name, d->age);
	else if (d->name == NULL && d->owner == NULL)
		printf("Name: (nil)\nAge: %.6f\nOwner: (nil)\n", d->age);
}
