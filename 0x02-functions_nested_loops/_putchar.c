#include <unistd.h>

/**
 * _putchar - function that imitates putchar
 * @c: character to be printed
 *
 * Return: On success, 1 is returned. On error, -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

