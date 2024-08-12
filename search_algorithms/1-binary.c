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
	return (binary_search_recursion(array, 0, size - 1, value));
}
/**
 * binary_search_recursion - recursive function to find the index of value
 * @array: pointer to first element in array
 * @size: size of the array
 * @value: value being searched
 * Return: index of value
*/
int binary_search_recursion(int *array, int left, int right, int value)
{

}
void print_array(int *array, int left, int right)
{
	int i;
	printf("");
	for ()
	{
		printf("%d, ", array[i]);
	}
	printf(%d, array[i]);
}