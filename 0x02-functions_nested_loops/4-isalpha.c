#include "main.h"

/**
 * _isalpha - is checking for alphabetic characters
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */


nt _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}



