#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: always sucess(0)
 */

int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '8'; i++)
	{
		for (j = '1'; j <= '9'; j++)
		{
			if (i >= j)
				continue;
			else
			{
				putchar(i);
				putchar(j);
				if (!(i == '8') || !(j == '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
