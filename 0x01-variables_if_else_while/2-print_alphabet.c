#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */
/**
 *main - that function print the alphabet
 *with a new line
 * Return: Always 0(Success)
 */
/* betty style doc for function main goes there */
int main(void)
{

	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
