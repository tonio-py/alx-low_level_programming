#include "main.h"

/**
 * _isupper - checks if a letter is uppercase or not
 * @c: takes c as an integer
 * Return: returns 1 if it's uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' &&  c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
