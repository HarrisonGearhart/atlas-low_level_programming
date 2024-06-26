#include "main.h"

/**
 * _atoi - Converts string into int
 * @s: the pointer to convert(string) 
 * Return: integer. 0 if no integer in string
*/

int _atoi(char *s) 
{
	int sign = 1;
	int result = 0;
	int i = 0;

	if (s[0] == '-') 
	{
		sign = -1;
  		i++;
	}
	if (s[0] == '+') 
	{
		i++;
	}
	while (s[i] != '\0') 
	{
  		if (s[i] >= '0' && s[i] <= '9') 
 		{
			result = result * 10 + (s[i] - '0');
		} 
		else 
		{
			break;
		}
		i++;
	}
	result = result * sign;

	return result;
}
