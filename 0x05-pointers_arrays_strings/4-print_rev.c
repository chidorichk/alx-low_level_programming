#include "main.h"

/**
*print_rev - set a variable to 98
*@s: paramater to swap
*Return: length of string
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
