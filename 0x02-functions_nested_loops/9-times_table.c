#include "main.h"

/**
 * times_table -  prints the 9 times table, starting with 0.
 *
 * Return: Always good
 */

void times_table(void)
{
	int i, j, product;
	int pT, pU;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			if (product > 9)
			{
				pT = product / 10;
				pU = product % 10;
				_putchar(pT + '0');
				_putchar(pU + '0');
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(product + '0');
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
					if (i * (j + 1) < 10)
					{
						_putchar(' ');
					}
				}
			}
		}
		_putchar('\n');
	}
}
