#include "main.h"

/**
 * set_string - value of the pointer becomes a char
 * @s: pointer to pointer
 * @to: pointer to char
 */
void set_string(char **s, char *to)
{
	*s = to;
}
