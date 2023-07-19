#include "function_pointers.h"

/**
 * int_index - index of the first element
 * @array: array to be used
 * @size: number of elements in the array
 * @cmp: pointer to the function to used to compare values
 * Return: Nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int i = 0;

	if (size > 0)
	{
	if (array != NULL && cmp != NULL)
	{
	while (i < size)
	{
	if (cmp(array[i]))
	return (i);
	i++;
	}
	}
	}
	return (-1);

}
