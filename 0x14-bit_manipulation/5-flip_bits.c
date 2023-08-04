#include "main.h"
#include <stdio.h>

/**
 * flip_bits - a function that returns the number of bits you would need to flip to get from one number to another.
 * @n: first number
 * @m: second number 
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits;

	for (bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bits++;
	}

	return (bits);
}


