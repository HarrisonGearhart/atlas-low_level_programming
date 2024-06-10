#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies 2 numbers
 * @argc: amount of arguments 
 * @argv: pointer that contains the arrays of the arguments
 * Return: 0 and result, 1 and error if not 2 arguments 
*/
int main(int argc, char *argv[])
{
	int a, b, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	res = a * b; 

	printf("%d\n", res);
	return (0);
}
