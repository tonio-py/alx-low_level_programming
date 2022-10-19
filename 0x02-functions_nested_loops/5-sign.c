#include "main.h"

/**
 * print_sign- used to check if the number is positive, negative or 0`
 * @n: takes integer input
 *
 * Return: 1 is n is positive, -1 if n is negative and 0 if n is zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
