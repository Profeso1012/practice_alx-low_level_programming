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
	int k;

	for (i = '0'; i <= '7'; i++)
	{
		for (j = '1'; j <= '8'; j++)
		{
			for (k = '2'; k <= '9'; k++)
			if ((i >= j) || (j >= k))
				continue;
			else
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (!(i == '7') || !(j == '8') || !(k == '9'))
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
