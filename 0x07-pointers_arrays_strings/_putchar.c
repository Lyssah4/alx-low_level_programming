#include"main.h"
#include<unistd.h>
/**
 * _putchar - writes c
 * @c: the letter to be printed
 * Return:1 once successful
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (Write(1, &c, 1));
}
