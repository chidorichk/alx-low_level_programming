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

	char c;
	int a;

	for (a = 0; a <= 9; a++)
	{
	putchar('0' + a);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
