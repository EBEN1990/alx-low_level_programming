#include <unistd.h>

/**
 * _putchar - write the character cto stdout
 * @c: The character to print
 * Return: 1 if true, 0 if false
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
