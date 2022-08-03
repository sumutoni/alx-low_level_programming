#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * copy - function to instantiate dog variable
 * @d: dog variable
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to dog variable
 */
dog_t *copy(dog_t *d, char *name, float age, char *owner)
{
	int i, j;

	i = 0;
	j = 0;
	d->age = age;
	while (name[i] != '\0')
	{
		d->name[i] = name[i];
		i++;
	}
	d->name[i] = '\0';
	while (owner[j] != '\0')
	{
		d->owner[j] = owner[j];
		j++;
	}
	d->owner[j] = '\0';
	return (d);
}
/**
 * new_dog - creates a new variable of type dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to dog variable
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dg;
	int len_n, len_o;

	len_n = strlen(name);
	len_o = strlen(owner);
	dg = malloc(sizeof(struct dog));
	if (dg == NULL)
	{
		free(dg);
		return (NULL);
	}
	dg->name = malloc(len_n + 1);
	if (dg->name == NULL)
	{
		free(dg->name);
		free(dg);
		return (NULL);
	}
	dg->owner = malloc(len_o + 1);
	if (dg->owner == NULL)
	{
		free(dg->name);
		free(dg->owner);
		free(dg);
		return (NULL);
	}
	dg = copy(dg, name, age, owner);
	return (dg);
}
