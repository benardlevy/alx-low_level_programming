#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Previous allocated pointer to the memory
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: Null or free(ptr)
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	char *nptr;
	unsigned int i;

	if (new_size == old_size)
	return (ptr);
	if (ptr == NULL)
	{
	nptr = malloc(new_size);
	if (nptr == NULL)
	{
	nptr = malloc(new_size);
	if (nptr == NULL)
	return (NULL);

	return (nptr);
	}
	else
	{
	if (new_size == 0)
	{
	free(ptr);
	return (NULL);
	}
	}

	nptr = malloc(new_size);
	if (nptr == NULL)
	return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
	nptr[i] = ((char *) ptr)[i];
	}

	free(ptr);
	return (nptr);

}
