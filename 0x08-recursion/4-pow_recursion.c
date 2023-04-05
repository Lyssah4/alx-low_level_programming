#include "main.h"
/**
 * _pow_recursion - gives the value of x to the power of y
 * @x: value to be raise
 * @y: power
 * Return: the result
 */
int _pow-recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
