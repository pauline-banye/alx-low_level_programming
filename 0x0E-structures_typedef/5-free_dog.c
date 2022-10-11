#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a struct dog
 * @puppy: struct dog
 */

void free_dog(my_dog *puppy)
{
	if (puppy)
	{
		free(puppy->name);
		free(puppy->owner);
		free(puppy);
	}
}
