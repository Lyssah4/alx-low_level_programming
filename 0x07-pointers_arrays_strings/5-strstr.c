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
		char *l = haystack;
		char *p = needle;

	while (*l == *p && *p != '\0')
	{
		l++;
		p++;
	}
	
	if (*p == '\0')
		return (haystack);
	}
	return (0);
}
