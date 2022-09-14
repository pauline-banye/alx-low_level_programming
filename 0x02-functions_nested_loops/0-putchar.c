#include "main.h"
#include <stdio.h>

/**
* main - entry point
* Description: goes through the l arry and spit c each time
* Return: always 0
*/

int main(void)

{
	int  i = 0;
	char c;
	char l[] = "_putchar\n";

	while (i <= 8)
	{
		c = l[i];
		_putchar(c);
		i++;
	}
	return (0);
