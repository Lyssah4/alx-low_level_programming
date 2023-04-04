#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: the input
 * @needle: the second input
 * Return: 0 when successful
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *c = haystack;
		char *d = needle;

		while (*c == *d && *d != '\0')
		{
			c++;
			d++;
		}

		if (*d == '\0')
			return (haystack);
	}

	return (0);
}
