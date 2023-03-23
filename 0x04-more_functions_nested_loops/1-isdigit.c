#include "main.h"

/**
 * _isdigit - checks if numbers are 0 to 9
 * @c: the parameter of the function
 *
 * Return: 0 o 1
 */
int _isupper(int c)
{
	if (c >= '0 && c <= '9')
		return (1);
	else
		return 0;
}
