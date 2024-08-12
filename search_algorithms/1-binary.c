#include "search_algos.h"
/**
 * binary_search - searches for array value using Binary search algorithm
 * @arrary: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: the index where the value is located
*/
int binary_search(int *array, size_t size, int value)
{
	return (binary_search_recursive(array, 0, size - 1, value));
}
/**
 * binary_search_recursion - recursive function to find the index of value
 * @array: pointer to first element in array
 * @size: size of the array
 * @value: value being searched
 * Return: index of value
*/
int binary_search_recursive(int *array, int left, int right, int value)
{
	int mid;

	if (!array)
		return (-1);

	print_array(array, left, right);
	mid = (left + right) / 2;

	if (array[mid] == value)
		return (mid);
	if (left == right)
		return (-1);
	if (value > array[mid])
		return (binary_search_recursive(array, mid + 1, right, value));
	else
		return (binary_search_recursive(array, left, mid - 1, value));
}
/**
 * print_array - prints array
 * @array: array to print
 * @left: left index
 * @right: right index
 * Return: void
 */
void print_array(int *array, int left, int right)
{
	int i;

	printf("Searching in array: ");
	for (i = left; i < right; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
}
