
#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_last_digit - check whether a letter is lower or not
 *@n: parameter c allow to handle the character
 *Return: 1 or 0 or -1
 */

int print_last_digit(int n)
{
int a = n % 10;
if (n < 0)
a = -a;
_putchar(a + '0');
return (a);
}
