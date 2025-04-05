#include "main.h"

/**
 * create_file - Creates a file with the given name and writes content
 * @filename: Name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t b_w;
	size_t length = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[length])
			length++;
		b_w = write(fd, text_content, length);

		if (b_w == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
