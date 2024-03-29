#include "main.h"

/**
 * create_file - creates a file and writes text to it
 * @filename: name of file to be created
 * @text_content: content to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)

{
	int fd, len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
	}

	if (write(fd, text_content, len) == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}

