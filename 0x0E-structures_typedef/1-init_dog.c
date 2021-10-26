#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - intialize variables in the dog struct
 * @d: pointer to variables
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
d->name = name;
d->age = age;
d->owner = owner;
}
