#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*_strcpy - set a variable to 98
*@dest: paramater to swap
*@src: parameter
*Return: dest
*/


char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';

	return (dest);
}
