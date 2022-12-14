#include "main.h"

/**
 * print_square - prints a square in the terminal
 * @size: represents the lenght of the square
 * Return: returns nothing
 */

void print_square(int size)
{
	int x;
	int y;

	x = size;
	y = size;

	if (size <= 0)
	{
		_putchar('\n');
	}

	while (x > 0)
	{
		while (y > 0)
		{
			_putchar('#');
			y--;
		}
		_putchar('\n');
		y = size;
		x--;
	}
}
