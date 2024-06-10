#include "main.h"
/**
 * factorial- returns factorial of given number
 * @n: given number
 * Return: intger value or -1 if n < o
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n > 1)
	{
		return (n * factorial (n - 1));
	}
	else
	{
		return (1);
	}
}
