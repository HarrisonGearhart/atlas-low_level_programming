#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters passed 
 * @...: a variable number of parameters to calculate sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int index, sum = 0;

	va_start(numbers, n);

	for (index = 0; index < n; index++)
		sum += va_arg(numbers, int);

	va_end(numbers);

	return (sum);
}