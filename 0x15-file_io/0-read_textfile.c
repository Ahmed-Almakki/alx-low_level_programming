#include "main.h"

/**
 * read_textfile - fun
 * @filename: file path
 * @letters: length of letter to print
 * Return: ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fp, rd, wr;

	if (filename == NULL)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buf = (char *)malloc((sizeof(char)) * (letters));
	if (buf == NULL)
		return (0);
	rd = read(fp, buf, letters);
	if (rd == -1)
		return (0);
	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1)
		return (0);
	close(fp);
	return (wr);
}
