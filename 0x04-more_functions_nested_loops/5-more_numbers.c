#include "main.h"

/**
 * more_numbers - prints numbers 0 through 14 10 times
 *
 * Return: returns nothing
 */

void more_numbers(void)
{
	int x = 0;
	int y = 0;

	while (y < 10)
	{
		while (x < 15)
		{
			if (x > 9)
			{
				_putchar(x / 10 + '0');
			}
			_putchar(x % 10 + '0');
			x++;
		}
		_putchar('\n');
		y++;
		x = 0;
	}
}
