#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes a variable dog
 * @d: pointer to s struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		printf("Ok\n");
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
