#include "main.h"

/**
 * get_endianness - the function that  checks the endianess
 *
 * Return: Returns  0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
