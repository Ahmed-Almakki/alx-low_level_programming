#include "main.h"

/**
 * create_file - functio
 * @filename: file path
 * @text_content:  content of given text
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IWUSR | S_IRUSR);
		if (fd == -1)
			return (-1);
		return (1);
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IWUSR | S_IRUSR);
	if (fd == -1)
		return (-1);
	wr = write(fd, text_content, strlen(text_content));
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
