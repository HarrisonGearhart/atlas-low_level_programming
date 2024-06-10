#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments recieved
 * @argc: amount of arguments passed through
 * @argv: pointer that contains arrays of arguments
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
