#include <string.h>
/**
 * _strchr - copies memory area
 * @s: the string to search from
 * @c: the character to search for
 *
 * Description: Returns a pointer to the first
 * occurrence of the character c in the string s,
 * or NULL if the character is not found.
 * Return: pointer to the matched character
 * or NULL if c wasn't found.
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
