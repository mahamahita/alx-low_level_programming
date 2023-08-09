#include "main.h"
#include <stdlib.h>

/**
 * read_textfile -ba function that reads a text file and prints it to the POSIX standard output.
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
	char *buf;

	if (filename == NULL) 
		return (0);

	f = open(filename, O_RDONLY); 

	if (f == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buff== NULL)
	{
		free(buf);
		return (0);
	}

	r = read(f, buf, letters); 
	if (r == -1) 
		return (0);

	w = write(STDOUT_FILENO, buffer, r); 
	if (w == -1 || r != w) 
		return (0);

	free(buf);

	close(f); 

	return (w);
}


