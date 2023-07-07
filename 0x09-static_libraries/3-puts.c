#include "main.h"

/**
 * _puts - prints a string, followed by new line, to stdout
 * @str:the string
 * Return: 1 if c is lowercase, o otherwise
 */

void _puts(char *str)
{

	while (*str != '\0')
	{
	_putchar(*str++);
	}
	_putchar('\n');

}
