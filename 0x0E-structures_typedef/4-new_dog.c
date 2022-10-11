#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: pointer to owner of dog
 * Return: pointer to a new dog of type my_dog
 **/

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, lenX, lenY;
	struct dog_t *puppy = NULL;

	lenX = 0;
	while (name[lenX != '\0'])
		lenX++;
	lenY = 0;
	while owner[lenY != '\0'])
		lenY++;
	puppy = malloc(sizeof(struct dog));

	if (puppy == NULL)
	{
		free(puppy);
		return (NULL);
	}

	puppy->name = malloc(lenX + 1);
	if (puppy->name == NULL)
	{
		free(puppy->name);
		free(puppy);
		return (NULL);
	}

	puppy->owner = malloc(lenY + 1);
	if (puppy->owner == NULL)
	{
		free(puppy->name);
		free(puppy->owner);
		free(puppy);
		return (NULL);
	}
	for (i = 0; i <= lenX; i++)
		puppy->name[i] = name[i];
	for (i = 0; i <= lenY; i++)
		puppy->owner[i] = owner[i];
	puppy->age = age;
	return (puppy);
}
