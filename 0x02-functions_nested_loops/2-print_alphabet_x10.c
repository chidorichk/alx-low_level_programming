#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_alphabet_x10 - print alphabet
 *Return: nothing
 */
void print_alphabet_x10(void)
{
char i = 'a';
int a = 0;
for (a = 0; a <= 9; a++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
