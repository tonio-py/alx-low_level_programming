#include "main.h"

/**
 * print_numbers - prints numbers 0 through 9 followed by a new line
 *
 * Return: returns nothing
 */

void print_numbers(void)
{
	int x = 0;

	while (x < 10)
	{
		_putchar(x + '0');
		x++;
	}
	_putchar('\n');
}
