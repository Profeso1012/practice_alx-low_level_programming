#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: always success(0)
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if ((alph == 'e') || (alph == 'q'))
			continue;
		else
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
