#include "main.h"

/**
 *
 * print_alphabet - entry point
 * Description: Prints the alphabet with _putchar
 * Return: void
 */
void print_alphabet(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
