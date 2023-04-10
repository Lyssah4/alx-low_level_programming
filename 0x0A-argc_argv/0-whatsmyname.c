#include <stdio.h>
#include "main.h"

/**
 * main - prints the name
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: o when successful
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}