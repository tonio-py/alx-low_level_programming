#include "main.h"

/**
 * _isalpha- used to check if the letter is upper case  or not`
 * @c: takes integer input
 *
 * Return: 1 if success and 0 if fail
 */
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
