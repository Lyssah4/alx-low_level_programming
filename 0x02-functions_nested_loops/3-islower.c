#include "main.h"
/**
 * _islower - function to print lowercase
 *
 * @c: parameter to be printed
 */
int _islower(int c)
{
	if (c >= 9 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
