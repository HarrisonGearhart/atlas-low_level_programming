#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: amount of arguments passed through
 * @argv: pointer that contains arrays of arguments
 * Return: 0
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i = argc -1;

	printf("%d\n", i);
	return (0);
}
