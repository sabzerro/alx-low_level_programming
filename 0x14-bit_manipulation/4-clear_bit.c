#include "main.h"

/**
 *
 * clear_bit - the function that sets the value of a bit to 0
 * at a given index.
 * @n: a  pointer of an unsigned long int.
 * @index: the index of the bit.
 *
 * Return: 1 if it worked, -1 if it didnot.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
