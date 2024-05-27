#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the elements of the array
 * @a: Array of ints
 * @n: number of elements of array to print
 * Return: void
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
