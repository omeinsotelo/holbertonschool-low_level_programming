#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - variable of the struct
 * @d: pointer
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: 0 success
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
