#include "main.h"
/**
 * print_binary - Print the binary representation of a number
 * @n: The number to convert and print
 *
 * Description: use recursive call of the print_binary
 * to convert the number n to binary then print it using _putchar.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
