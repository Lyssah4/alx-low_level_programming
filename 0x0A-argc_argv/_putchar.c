#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes to stdout
 * @c: the one to print
 * Return: 1 when successful
 * On eroor, -1 is returned and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
