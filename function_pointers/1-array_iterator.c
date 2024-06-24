#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on each element of an array
 * @size: size of the array
 * @action: pointer to the function to use
 * @array: array to iterate through
 * Return: Void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int x = 0;
	if (array != NULL && action != 0 && size > 0)
	{
		while (x < size)
		{
			action(array[x]);
			x++;
		}
	}
}
