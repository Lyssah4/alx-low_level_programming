#include "main.h"
int _sqrt(int n, int i);

 /**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: number to find the square root for
  * Return: the square root
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(1, n));
}
/**
 * _sqrt - find the natural
 * square root of a number
 * @n: number to find the square root for
 * @i: iterator
 * Return: the square root
 */
int _sqrt(int n, int i)
{
	if (n > i)
		return (-1);
	else if (n * n == i)
		return (n);
	return (_sqrt(n + 1, i));
}
