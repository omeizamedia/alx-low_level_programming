#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Read text file print to STDOUT.
 * @fn: text file being read
 * @nolet: number of letters to be read
 * Return: y- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *fn, size_t nolet)
{
	char *b;
	ssize_t file_d;
	ssize_t y;
	ssize_t x;

	file_d = open(fn, O_RDONLY);
	if (file_d == -1)
		return (0);
	b = malloc(sizeof(char) * nolet);
	x = read(file_d, b, nolet);
	y = write(STDOUT_FILENO, b, x);

	free(b);
	close(file_d);
	return (y);
}
