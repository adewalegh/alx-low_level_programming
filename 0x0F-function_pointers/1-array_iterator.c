#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints array
 * @array: array
 * @size: number of elem
 * @action: print in hexadecimal
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
