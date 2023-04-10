#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - Creates a file with the given name
 * writes the specified content.
 * @filename: The name of the file to create.
 * @text_content: The content to write to the file.
 *
 * Return: If successful, returns 1. Otherwise, returns -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, w;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (len > 0)
	{
		w = write(fd, text_content, len);

		if (w == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
