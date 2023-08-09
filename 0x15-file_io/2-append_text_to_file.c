#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f, a, b = 0;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);
	if (f < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[b])
			b++;
		a = write(f, text_content, b);
		if (a != b)
			return (-1);
	}

	close(f);

	return (1);
}


