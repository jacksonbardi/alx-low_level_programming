#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: Pointer to the array of integers.
 * @size: The nmbr of elements in the array.
 * @cmp: Pointer to the fnction used to compare values.
 *
 * Return: Index of the frst matching element,
 * or -1 if no match or invalid input.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
