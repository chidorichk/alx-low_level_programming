#include <time.h>
#include <stdio.h>

/* more headers goes there */
/**
 *main - that function print the alphabet except q and e
 *with a new line
 * Return: Always 0(Success)
 */
/* betty style doc for function main goes there */
int main(void)
{

	int c;

	for (c = 0; c <= 9; c++)
	{
	printf("%d", c);
	}
	putchar('\n');
	return (0);
}
