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
	int l;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
				if ((i == k) && (j > l))
					continue;
				else
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (!(i == '9') || !(j == '9') || !(k == '9') || !(l == '9'))
					putchar(',');
					putchar(' ');
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
