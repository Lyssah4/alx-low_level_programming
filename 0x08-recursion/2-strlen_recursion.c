#include "main.h"
/**
 * _strlen_recursion - finds out the length of a given string
 * @s: the string
 * Return: returns the length of the string
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
