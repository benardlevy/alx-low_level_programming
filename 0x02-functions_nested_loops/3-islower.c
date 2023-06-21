#include "main.h"

/**
 * _islower - shows 1 if the input is a
 * lower case character. Another cases,  shows
 * 0
 * @c: is the char ASCII code
 *
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');

}

