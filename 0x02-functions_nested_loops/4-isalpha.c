#include "main.h"
/**
 * _isaplha - checks for alphabets
 *
 * @c: the parameter
 *
 * Return: 1 if alphabetic and zero if not.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	return (1);
        
	else 
	return (0);
}
