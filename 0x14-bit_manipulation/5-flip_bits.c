#include "main.h"
/**
 * flip_bits - Give the number of bits to switch to get from
 * a value n to another value m
 * @n: first numberto check
 * @m: second number to check
 *
 * Return: return the number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0;
	unsigned long int btw = n ^ m;

	while (btw)
	{
		flip += (btw & 1);
		btw >>= 1;
	}
	return (flip);
}
