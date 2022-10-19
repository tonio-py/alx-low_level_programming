#include "main.h"

/**
 * _abs- used to check if the number is positive, negative or 0`
 * @n: takes an integer as it's value
 *
 * Return: returns the absolute values of the number
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
