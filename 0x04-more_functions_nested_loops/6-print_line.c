#include "main.h"

/**
 * print_line - prints underscore number of times
 * @n: takes n as an integer denoting lenght of line
 * Return: returns nothing
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
