#ifndef DOG
#define DOG

/**
 * struct dog - struct for dog info
 * @name: type char
 * @age: float type
 * @owner: char type
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog my_dog;

void init_dog(struct dog *puppy, char *name, float age, char *owner);
void print_dog(struct dog *puppy);
my_dog *new_dog(char *name, float age, char *owner);
void free_dog(my_dog *puppy);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
