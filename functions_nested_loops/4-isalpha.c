#include "main.h"

/**
 * _isalpha - checks for alphabetical character
 * Description: Checks if character is a letter, lowercase, or uppercase
 * Return: 1 if character is a letter, upper or lowercase. 0 if otherwise 
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
