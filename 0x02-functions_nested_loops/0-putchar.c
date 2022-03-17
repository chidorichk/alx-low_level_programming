#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *main - print _putchqr
 *Return:0
 *
 *
 */
int main(void)
{
char text[10] = "_putchar";
int i = 0;
for (i = 0; i <= 7; i++)
{
_putchar(text[i]);
}
 _putchar('\n');
return (0);
}
