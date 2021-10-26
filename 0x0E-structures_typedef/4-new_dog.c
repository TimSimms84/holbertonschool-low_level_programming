#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog- makes a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: newdog
 */



dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	struct dog *copy;

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);

	copy = malloc(sizeof(dog_t));

	if (copy == NULL)
		return (NULL);

	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;
	copy->name = newdog->name;
	copy->owner = newdog->owner;

	return (newdog);
}
