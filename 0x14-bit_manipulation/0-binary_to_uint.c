#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int.
 * @b: pointer
 * Return: the converted number, or 0 if there is one or more chars in the string b that is not 0 or 1 |          b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, power;
	int l;

	if (b == NULL)
		return (0);

	for (l = 0; b[l]; l++)
	{
		if (b[l] != '0' && b[l] != '1')
			return (0);
	}

	for (power = 1, sum = 0, l--; l >= 0; l--, power *= 2)
	{
		if (b[l] == '1')
			sum += power;
	}

	return (sum);
}


