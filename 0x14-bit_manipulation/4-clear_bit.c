#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n: A pointer to the bit.
 * @index: The index to the position
 * Return: If an error occurs - -1. | - 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	num <<= index;
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	(*n) = (*n) & ~(num);
	return (1);
}


