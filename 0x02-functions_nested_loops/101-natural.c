#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*main -sum of multiple
* of  3 and 5 below 1024
*Return: Always 0 (Success)
*/

int main(void)
{
int i, sum;
sum = 0;
for (i = 0; i < 1024; i++)
{
	if ((i % 3 == 0) || (i % 5 == 0))
	{
	sum = sum + i;
	}
}
	printf("%d\n", sum);
	return (0);
}
