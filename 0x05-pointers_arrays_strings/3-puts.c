#include "main.h"

/**
*_puts - set a variable to 98
*@str: paramater to swap
*Return: length of string
*/

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
	_putchar(*(str + i));
	i = i + 1;
	}
	_putchar('\n');
}
