#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints name of the function
 * @argc: # of arguments 
 * @argv: pointer that contains the arrays of arguments
 * Return: 0
*/
int main(int argc __attribute__ ((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
