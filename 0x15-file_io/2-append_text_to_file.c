#include "main.h"
/**
 * append_text_to_file - function
 * @filename: fike path
 * @text_content: content of text
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, rd;

	if (filename == NULL)
		return (-1);
	else if ((access(filename, F_OK) == -1) || (access(filename, W_OK) == -1))
		return (-1);
	if (text_content == NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND, S_IWUSR | S_IRUSR);
		if (fd == -1)
			return (-1);
		return (1);
	}
	fd = open(filename, O_WRONLY | O_APPEND, S_IWUSR | S_IRUSR);
	if (fd == -1)
		return (-1);
	rd = write(fd, text_content, strlen(text_content));
	if (rd == -1)
		return (-1);
	close(fd);
	return (1);
}
