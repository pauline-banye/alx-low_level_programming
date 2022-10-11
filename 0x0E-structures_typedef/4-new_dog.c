#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: pointer to owner of dog
 * Return: pointer to a new dog of type my_dog
 **/

my_dog *new_dog(char *name, float age, char *owner)
{
	int nameLen, ownerLen, i;
	my_dog *puppy;

	puppy = (my_dog *)malloc(sizeof(my_dog));

	if (puppy == NULL)
		return (NULL);
	nameLen = ownerLen = 0;

	while (name[nameLen++])
		;

	while (owner[ownerLen++])
		;

	puppy->name = malloc(nameLen * sizeof(puppy->name));
	if (puppy->name == NULL)
	{
		free(puppy);
		return (NULL);
	}

	for (i = 0; i <= nameLen; i++)
		puppy->name[i] = name[i];
	puppy->age = age;
	puppy->owner = malloc(ownerLen * sizeof(puppy->owner));

	if (puppy->owner == NULL)
	{
		free(puppy->name);
		free(puppy);
		return (NULL);
	}

	for (i = 0; i <= ownerLen; i++)
		puppy->owner[i] = owner[i];
	return (puppy);
}
