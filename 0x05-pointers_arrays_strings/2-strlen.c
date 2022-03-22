#include "main.h"

/**
*_strlen - set a variable to 98
*@str: paramater to swap
*Return: length of string
*/

int _strlen(char *str)
{
	int i;
	int c = 0;

	for (i = 0; *(str + i) != '\0'; i++)
	{
	c = c + 1;
	}

	return (c);
}
