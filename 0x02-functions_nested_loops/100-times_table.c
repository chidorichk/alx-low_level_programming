#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_times_table - prints the 9 times table
 *
 * @n : prints the n times table
 *
 * Return: void
 */

void print_times_table(int n)
{
	int row, column, product;

	for (row = 0; row <= n; row++)
	{
		for (column = 0; column <= n; column++)
		{
			product = row * column;

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
				printf("%d", product);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				printf("%d", product);
			}
		}
		_putchar('\n');
	}
}
