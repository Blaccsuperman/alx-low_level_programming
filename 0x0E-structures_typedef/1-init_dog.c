#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes variable for struct dog
 * @d: dog
 * @name: doggos name
 * @age: doggos age
 * @owner: doggos ownerr
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)	
		d = malloc(sizeof(struct dog));
	
	d->name = name;
	d->age = age;
	d->owner = owner;
}
