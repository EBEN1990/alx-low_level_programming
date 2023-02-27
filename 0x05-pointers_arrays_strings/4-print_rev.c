#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	for (i = i; i >= 0; i--)
		_putchar('\n');
}
