#include "main.h"

/**
 * print_alphabet- used to print the alphabets
 *
 * Return: Always(0) Success
 */
void print_alphabet(void)
{
	int x = 97;
	char m;

	while (x < 123)
	{
		m = (char) x;
		x++;
		_putchar(m);
	}

	_putchar('\n');
}
