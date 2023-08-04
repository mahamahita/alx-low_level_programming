#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
* @n: pointer to the  bit.
 * @index: index of the bit.
 * Return: 1 if it worked, -1 if it didn't.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	num <<= index;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	(*n) = (*n) | num;
	return (1);
}


