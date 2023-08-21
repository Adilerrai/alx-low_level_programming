#include <string.h>
/**
 * _strncat - concatenate n characters of a word to another
 * @dest: the word to concatenate to
 * @src: the word to concatanate
 * @n: the number of characters
 *
 * Description: takes n characters from src
 * and adds them to the pointed to string dest.
 * Return: return a pointer to the concatenated string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
