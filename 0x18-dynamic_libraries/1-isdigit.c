#include "main.h"
#include <ctype.h>
/**
 * _isdigit - check if entry is lower case
 * @c: The character to check
 *
 * Description: Use the islower function to check
 * if an entry is lowercase or uppercase
 * Return: return 1 if the entry is lowercase
 * and return 0 if it's uppercase
 */
int _isdigit(int c)
{
	return (isdigit(c) ? 1 : 0);
}
