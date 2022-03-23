#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*print_array - set a variable to 98
*@a: paramater to swap
*@n: parameter
*Return: length of string
*/


void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
