#include "main.h"
/**
 *  * function that returns the value of a bit at a given index.
 *   *
 *    * @n: the number the index is the index of the bit 
 *     *
 *      *  Return: If an error occurs - -1.
 *       *         Otherwise - The value of bit at index.
 *        */
int get_bit(unsigned long int n, unsigned int index)
{
	    if (index >= sizeof(n) * 8 !=0)
		            return -1;

	        return ((n >> index) & 1);
}
