#include "main.h"
/**
 * print_last_digit - function to print last digit
 *
 * @l: parameter of the function
 *
 * Return: m
 */
int print_last_digit(int l)
{
	int m;
	m = l % 10;

	if (l < 0)
		m = -m;
	_putchar(m + '0');
	return (m);
}
