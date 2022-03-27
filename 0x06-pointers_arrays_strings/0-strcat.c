#include "main.h"

/**
* _strcat - concatenate
* @dest: destination
* @src: source
* Return: a pointer to the result of concatenation
*/


char *_strcat(char *dest, char *src)
{
	char *result = "";
	int i = 0;
	int j = 0;

	for (; *(dest + i) != '\0'; i++)
	{
	*(result + i) = *(dest + i);
	}
	for (j = 0; *(src + j) != '\0'; j++)
	{
	*(result + i + 1 + j) = *(src + j);
	}
	return (result);
}
