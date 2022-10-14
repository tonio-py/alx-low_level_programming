#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main- Entry Point
 *
 * Return: Always(0) Success
 */
int main(void)
{
	int n;
	char text[1000];
	int len;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	sprintf(text, "%d", n);
	len = strlen(text);
	digit = (text[len - 1]) - '0';

	if (n < 0)
	{
		digit = -digit;
	}
	if (digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, digit);
	}
	else if (digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, digit);
	}
	else if (digit < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
	}
	return (0);
}
