#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes c to stdout
 * @c: the chatacter to be printed
 * Return: 1 when successful
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
