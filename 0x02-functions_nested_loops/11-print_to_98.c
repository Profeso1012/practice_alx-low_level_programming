#include "main.h"

/**
 * print_to_98 -  prints all natural numbers from n to 98
 * @n: initial number
 *
 * Return: always a go
 */

void print_to_98(int n)
{
	int temp, tT, tU;
	int i, iT, iU;

	if (n < 98)
	{
	if (n < 0)
	{
		temp = -n;
		while (!(temp == 0))
		{
			_putchar('-');
			if (temp > 9)
			{
				tT = temp / 10;
				tU = temp % 10;
				_putchar(tT + '0');
				_putchar(tU + '0');
			}
			else
			{
				_putchar(temp + '0');
			}
			_putchar(',');
			_putchar(' ');
			temp--;
		}
		for (i = 0; i <= 98; i++)
		{
			if (i > 9)
			{
				iT = i / 10;
				iU = i % 10;
				_putchar(iT + '0');
				_putchar(iU + '0');
			}
			else
			{
				_putchar(i + '0');
			}
			if (i < 98)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
	}
	else
	{
	for (i = n; i <= 98; i++)
	{
		if (i > 9)
		{
			iT = i / 10;
			iU = i % 10;
			_putchar(iT + '0');
			_putchar(iU + '0');
		}
		else
		{
			_putchar(i + '0');
		}
		if (i < 98)
		{
		_putchar(',');
		_putchar(' ');
		}
	}
	}
	}
	else if (n > 98)
	{
		for (i = n; i <= 98; i--)
		{
			if (i > 9)
			{
				iT = i / 10;
				iU = i % 10;
				_putchar(iT + '0');
				_putchar(iU + '0');
			}
			else
			{
				_putchar(i + '0');
			}
			if (i < 98)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
	}
	else
	{
		_putchar('9');
		_putchar('8');
	}
	_putchar('\n');
}
