#include "main.h"

/**
 * print_most_numbers - prints numbers 0 through 9 with exception of 2 and 4
 *
 * Return: returns nothing
 */

void print_most_numbers(void)
{
	int x = 0;

	while (x < 10)
	{
		if (x == 2 || x == 4)
		{
			x++;
			continue;
		}
		_putchar(x + '0');
		x++;
	}
	_putchar('\n');
}
