#include "main.h"
#include <stdio.h>

/**
 * error_file - a program that copies the content of a file to another file.
* @argv: arguments vector.
*@argc: number of arguments passed to the program
 * Return: no return.
 */
int main(int argc, char *argv[])
{
	int r, w, x, m, n;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	r = open(argv[1], O_RDONLY);
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((x = read(r, buffet, BUFSIZ)) > 0)
	{
		if (w < 0 || write(w, buffer, x) != x)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(r);
			exit(99);
		}
	}
	if (x < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	m = close(r);
	n = close(w);
	if (m < 0 || n < 0)
	{
		if (m < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", r);
		if (n < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", w);
		exit(100);
	}
	return (0);
}


