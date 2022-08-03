#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - function to free memory space allocated to dog variable
 * @d: dog struct
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	else
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
