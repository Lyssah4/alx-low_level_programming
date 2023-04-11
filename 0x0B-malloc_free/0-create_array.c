#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of size size
 * @size: size of the array
 * @c: char to assign
 * Description: create array of size size
 * Return: pointer to the array, null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
