#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - determines whether a string is palindrome
 * @s: atring to be reversed
 * Return: 1 if it is, 0 it is not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns the lenght of the string
 * @s: the string to find the length
 * Return: return the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - finds the characters' recursive for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 * Return: 1 if palinrome, 0 if not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len -1))
		return (0);
	if(i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
