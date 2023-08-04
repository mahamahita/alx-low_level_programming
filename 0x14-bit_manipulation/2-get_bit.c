#include "main.h"
#include <stdio.h>
/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: number to evaluate
 * @index: index of the bit to get
 * Return: Value of bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}


