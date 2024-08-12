#include "search_algos.h"
/**
 * linear_search - Searches for value in an array using linear search algorithm
 * @array: pointer to first element of array
 * @size: size of array
 * @value: value to search for
 * Return: -1 if NULL, otherwise, the first index where the value is located
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

