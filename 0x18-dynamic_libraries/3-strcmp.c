#include <string.h>
/**
 * _strcmp - Compares between two strings
 * @s1: the first word to compare
 * @s2: the second word to compare
 *
 * Description: Compares between the strings
 * s1 and s2.
 * Return: returns 0 if the two strings
 * are equal, a negative value if s1 is smaller
 * than s2 and a positive value id s1 is bigger
 * than s2.
 */
int _strcmp(char *s1, char *s2)
{
	return (strcmp(s1, s2));
}
