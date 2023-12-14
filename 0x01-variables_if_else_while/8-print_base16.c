#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always success(0)
 */

int main(void)
{
	int dig;
	char alph;

	for (dig = '0'; dig = '9'; dig++)
		putchar(dig);
	for (alph = 'a'; alph <= 'f'; ++alph)
		putchar(alph);
	putchar('\n');
	return (0);
}
