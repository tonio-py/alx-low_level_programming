#include "main.h"

/**
 * print_alphabet_x10- used to print the alphabets ten times`
 *
 * Return: Always(0) Success
 */
void print_alphabet_x10(void)
{
	int n_times = 0;
	int x = 97;
	char m;

	while (n_times < 10)
	{
		n_times++;
		while (x < 123)
		{
			m = (char) x;
			x++;
			_putchar(m);
		}
		x = 97;
		_putchar('\n');
	}
}
