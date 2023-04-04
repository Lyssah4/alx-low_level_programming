#include "main.h"
/**
 * _memset - fill with a specific value
 * @s: starting address of memory to be filled
 * @b: the value we need
 * @n: number of bytes to be changed
 *
 * Return: contains new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
