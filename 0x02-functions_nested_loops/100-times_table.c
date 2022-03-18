#include "main.h"

/**
 * print_times_table - prints the 9 times table
 *
 * @n : prints the n times table
 *
 * Return: void
 */

void print_times_table(int n)
{
	int row, column, product, tens, ones;

	for (row = 0; row <= n; row++)
	{
		for (column = 0; column <= n; column++)
		{
			product = row * column;
			tens = product / 10;
			ones = product % 10;

			if (column == 0)
			{
				_putchar('0');
			}
			else if (row * (column + 1) < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
		}
		_putchar('\n');
	}
}
