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
	int x = 0;

	while (x < 10)
	{
		putchar((x + '0'));
		x++;
	}
	putchar('\n');
	return (0);
}
