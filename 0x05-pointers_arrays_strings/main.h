#include "main.h"

/**
 * reset_to_98 - updates the variable
 * @n: pointer to the variable to update
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

void reset_to_98(int *n)
{
	*n = 98;
}
