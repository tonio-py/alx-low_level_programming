#include "main.h"
/**
 *_memset -   fills memory with a constant byte
 *@s: takes a pointer character as s
 *@b: takes b as a character
 *@n: takes n as an integer
 *Return: dest
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;


	for (i = 0; i < n; i++)
	{
		*(s + i) = b;

	}

	return (s);
}
