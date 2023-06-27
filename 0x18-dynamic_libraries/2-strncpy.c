#include <string.h>
/**
 * _strncpy - copies n character of a string to another
 * @dest: the string to copy to
 * @src: the string to copy from
 * @n: the number of characters to copy
 *
 * Description: using the string library. _strncpy
 * takes the first n characters of the src string
 * then adds them to the dest string.
 * Return: returns a pointer to the changed string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
