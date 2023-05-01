#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (!dog)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	if (!name)
	{
		free(dog);
		return (NULL);
	}
	if (!owner)
	{
		free(dog);
		return (NULL);
	}
	dog->name = strdup(name);
	dog->age = age;
	dog->owner = strdup(owner);
	return (dog);
}
