#include <string.h>
/**
 * _strspn - copies memory area
 * @s: the string to search from
 * @accept: the accepted bytes
 *
 * Description: Returns the number of bytes
 * in the initial segment of s which consist
 * only of bytes from accept.
 * Return: returns the number of bytes in the initial
 * segment of s which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
