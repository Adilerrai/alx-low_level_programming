#include "main.h"
/**
 *  * flip_bits - Counts the number of bits needed to be
 *   *             flipped to get from one number to another.
 *    * @n: The number.
 *     * @m: The number to flip n to.
 *      *
 *       * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;
	unsigned int i;
		for (i = 0; i < sizeof(unsigned long int) * 8; i++)
			{
			if (xor & (1UL << i))
				bits++;
			}

	return (bits);
}
