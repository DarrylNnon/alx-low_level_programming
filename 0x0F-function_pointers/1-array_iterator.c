#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array.
 * @array: input integer array.
 * @size: size of the array.
 * @action: pointer to the function.
 * Author: Darryl Nnon
 * Return: return nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int b;

	if (array && action)
		for (b = 0; b < size; b++)
			action(array[b]);
}
