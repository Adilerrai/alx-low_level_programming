#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _atoi - converts a string to int
 * @s: the string to convert
 *
 * Description: take a pointer as parameter
 * and converts the variable it points to to an int
 * Return: return the int conversion or 0
 * if the string doesn't have a number in it
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);
	return (num * sign);
}
