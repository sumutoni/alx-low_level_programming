#ifndef DOG_H
#define DOG_H

/**
 * dog - typedef of dog structure
 */
typedef struct dog dog;
/**
 * struct dog - structure to hold dog information
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
