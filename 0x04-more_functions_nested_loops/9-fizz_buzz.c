#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int x = 1;

	while (x < 101)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (x % 5 == 0)
		{
			if (x  == 100)
			{
				printf("Buzz");
				printf("\n");
			}
			else
			{
			printf("Buzz ");
			}
		}
		else
		{
			printf("%d ", x);
		}
		x++;
	}
	return (0);
}
