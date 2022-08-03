#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print information of a dog
 * @d: struct dog
 */
void print_dog(struct dog *d)
{
	char *s;

	s = "";
	if (d == NULL)
		printf("%s", s);
	if (d->name == NULL)
		printf("Name: (nil)\n");
	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
