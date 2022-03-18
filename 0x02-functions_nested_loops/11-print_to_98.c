
#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_to_98 - print numbers
 *@n: parameters to start with
 *Return: nothing
 */

void print_to_98(int n)
{
int i;
for (i = n; i <= 98; i++)
{
	printf("%d", n);
	if (n != 98)
	printf(", ");
}
}
