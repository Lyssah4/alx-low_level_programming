#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory storage
 * @src: memory copy
 * @n: number of bytes
 *
 * Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int m = 0;
	int o = n;

	for (; m < o; m++)
	{
		dest[m] = src[m];
		n--;
	}
	return (dest);
}
