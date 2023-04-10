#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
