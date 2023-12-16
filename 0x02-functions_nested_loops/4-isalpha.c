#include "main.h"

/**
 * _isalpha - checks if a character is lower or uppercase
 * @c: character to be assed
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
