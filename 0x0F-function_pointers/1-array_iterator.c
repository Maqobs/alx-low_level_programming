#include "function_pointers.h"
/**
 * function that executes a function given as a parameters
 * @array: point to array of integers
 * @size: lenght of array input
 * @action: pointer to function that prints each element of an array
 *
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action && array)
	{
		while (i < size)
		{
			(*action)(array[i]);
			i++;
		}
	}
}
