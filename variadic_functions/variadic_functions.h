#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
/**
 * struct printer - struct type defining a printer
 * @datatype: the datatype
 * @print: a function pointer to a function that prints
*/
typedef struct printer
{
	char *datatype;
	void (*print)(va_list arg);
} printer_p;

int sum_them_all(const unsigned int n, ...);

#endif
