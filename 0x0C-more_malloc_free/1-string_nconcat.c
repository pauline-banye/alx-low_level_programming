#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the result
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *x;

	unsigned int str1 = 0, str2 = 0, a;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";


	while (s1[str1] != '\0')
	{
		str1++;
	}

	while (s2[str2] != '\0')
	{
		str2++;
	}

	if (n > str2)
		n = str2;
		x = malloc(sizeof(char) * (str1 + n + 1));
	if (x == NULL)
		return (0);

	for (a = 0; a < str1; a++)
	{
		x[a] = s1[a];
	}
	for (; a < (str1 + n); a++)
	{
		x[a] = s2[a - str2];
	}
	x[a] = '\0';

return (x);
}
