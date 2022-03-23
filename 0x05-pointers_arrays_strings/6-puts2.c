#include "main.h"

/**
*puts2 - set a variable to 98
*@str: paramater to swap
*Return: length of string
*/


void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
