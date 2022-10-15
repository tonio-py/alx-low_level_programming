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

	while (x < 123)
	{
		putchar((char) x);
		x++;
	}
	putchar('\n');
	return (0);
}
