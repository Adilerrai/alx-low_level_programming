#include <string.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to search from
 * @accept: the accepted bytes
 *
 * Description: _strpbrk() function locates
 * the first occurrence in the string s of any of
 * the bytes in the string accept.
 * Return: pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if not found.
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
