#include "main.h"

/**
 * print_alphabet_x10 - this function prints the alphabets in 10 times
 *
 * Return: always success
 */

void print_alphabet_x10(void)
{
	char alph;
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
