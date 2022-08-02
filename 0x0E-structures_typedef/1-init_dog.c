#include "dog.h"

/**
 * init_dog - function to initialize a variable of type dog
 * @d: dog structure to initialize
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: no return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
