#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *_islower - print whether a letter is lower or not
 *Return: 1 or 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
} else
{
return (0);
}
}
