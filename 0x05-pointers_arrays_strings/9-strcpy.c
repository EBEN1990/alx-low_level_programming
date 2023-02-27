#include "main.h"

/**
 * _strcpy - coppies the string pointed to bu src
 * @dest: destination
 * @src: sourse
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}

	*(dest + len) = '\0';
	return (dest);
}
