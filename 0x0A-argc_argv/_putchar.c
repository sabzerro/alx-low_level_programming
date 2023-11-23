#include <stdio.h>
#include "main.h"

/**
 * _putchar - Writes The Character c To Standard Output
 * @c: The character to be printed
 * Return - 1 on Success
 * on error - return -1 and error number set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
