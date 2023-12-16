#include "main.h"

/**
 * print_alphabet - this function prints the alphabets in lowercase
 *
 * Return: always success
 */

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
