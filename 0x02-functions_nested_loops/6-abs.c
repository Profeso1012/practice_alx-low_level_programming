#include "main.h"

/**
 * _abs - computes the absolute value of a number
 * @n: number to be accessed
 *
 * Return: computed absolute value
 */
int _abs(int n)
{
	if (!(n >= 0))
		n = -1 * n;
	return (n);
}
