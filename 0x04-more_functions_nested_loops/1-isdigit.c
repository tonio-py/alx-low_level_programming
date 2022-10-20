#include "main.h"

/**
 * _isdigit - checks if argument is a digit
 * @c: takes c as an integer
 * Return: returns 1 if it's a digit  and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
