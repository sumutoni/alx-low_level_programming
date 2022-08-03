#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print information of a dog
 * @d: struct dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: \n", d->name);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: \n", d->owner);
		printf("Age: \n",d->age);
	}
}
