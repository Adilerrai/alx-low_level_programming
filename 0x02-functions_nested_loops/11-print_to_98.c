#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 *
 * @n: a given number
 *
 * Return: sum of two numbers
 *
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%i, ", n--);
		printf("%i\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
