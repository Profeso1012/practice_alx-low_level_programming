#include "main.h"

/**
 * _islower - checks if a character is lower or uppercase
 * @c: character to be assed
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
