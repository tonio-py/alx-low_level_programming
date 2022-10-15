#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- Entry Point
 *
 * Return: Always(0) Success
 */
int main(void)
{
	int x = 97;
	char m;

	while (x < 123)
	{
		m = (char) x;
		x++;

		if (m == 'e' || m == 'q')
		{
			continue;
		}
		putchar(m);
	}
	putchar('\n');
	return (0);
}
