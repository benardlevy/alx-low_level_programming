#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{

	int longi = 0;

	While(*s != '\0')
	{
	longi++;
	s++;
	}

	return (longi);

}
