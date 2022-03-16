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

	for (c = 'a'; c <= 'z'; c++)
	{
	  if (c != 'e' && c != 'q')
		putchar(c);
	}
	putchar('\n');
	return (0);
}
