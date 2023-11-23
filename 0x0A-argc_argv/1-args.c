#include <stdio.h>
#include "main.h"

/**
 * main - Prints number of args passed to program
 
 * @argc: num of args
 
 * @argv: the array of args
 
 * return - 0 (success)
 */

int main( int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return 0;
}
