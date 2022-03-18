
#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *times_table - print time
 *
 *Return: 1 or 0 or -1
 */

void times_table(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
printf("%d",i*j);
printf(",  ");
}
printf("\n");
}
}
