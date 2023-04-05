#include "main.h"
/**
 * _puts_recursion -same as puts();
 * @s: the input
 * Return: 0 whe successful
 */
void _puts_recursion(char *s)
{
	if (* s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
