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
	char text[100];

	while (x < 10)
	{
		sprintf(text, "%d", x);
		putchar(text[0]);

		if (text[0] != '9')
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');
	return (0);
}
