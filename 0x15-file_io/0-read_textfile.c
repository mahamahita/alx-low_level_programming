#include "main.h"
#include <stdlib.h>

/**
 * read_textfile -ba function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t r, w;
	char *buffer;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	r = read(f, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	close(f);

	free(buffer);

	return (w);
}


