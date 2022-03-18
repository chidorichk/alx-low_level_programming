
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
_putchar( i * j + '0');
if (j < 9)
{
_putchar(", ");
}
if ((i * (j + 1) <= 9))
{
_putchar(" ");
}
}
if (i != 9)
_putchar("\n");
}
}
