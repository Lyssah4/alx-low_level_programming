#include "main.h"
/**
 * print_alphabet - function to print the alphabet in lowercase
 *
 * Return: 0 when successful
 */

void print_alphabet(void)
{
	char i;

	for(i = 'a'; i <= 'z'; i++ )
	{
		_putchar(i);
		_putchar('\n');
	}
}
