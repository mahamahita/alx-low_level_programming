#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int.
 * @b: pointer
 * Return: the converted number, or 0 if there is one or more chars in the string b that is not 0 or 1 |          b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec = 2 * dec + (b[i] - '0');
	}
	return (dec);
}


