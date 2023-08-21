#include "main.h"
#include <ctype.h>
/**
 * _islower - check if entry is lower case
 * @c: The character to check
 *
 * Description: Use the islower function to check
 * if an entry is lowercase or uppercase
 * Return: return 1 if the entry is lowercase
 * and return 0 if it's uppercase
 */
int _islower(int c)
{
	return (islower(c) ? 1 : 0);
}
