#include <string.h>
/**
 * _strcat - Concatanate two words
 * @dest: The word to add to
 * @src: The word to append
 *
 * Description: make use of the string.h library
 * to concatanate the two words dest and src
 * Return: Return a pointer the the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
