#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* natural -sum of multiple of  3 and 5
*Return :sum
*/

void natural(void)
{
int i, sum;
 sum = 0;
for (i = 0; i < 1024; i++)
{
	if ((i % 3 == 0) || (i %5 == 0))
	{
	sum = sum + i;
	}
}
	printf("%d", sum);
}
