#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - creates a new variable of type dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dg;

	dg = malloc(sizeof(struct dog));
	if (dg == NULL)
		return (NULL);
	strcpy(dg->name, name);
	dg->age = age;
	strcpy(dg->owner, owner);
	return (dg);
}
