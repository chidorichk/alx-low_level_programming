#include "main.h"

/**
*swap_int - set a variable to 98
*@a: paramater to swap
*@b:paramater to swap
*Return : nothing
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
