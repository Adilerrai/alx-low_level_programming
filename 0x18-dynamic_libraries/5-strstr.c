#include <string.h>
/**
 * _strstr - locates a substring.
 * @haystack: the string to search into
 * @needle: the substring to look for
 *
 * Description: _strstr() function finds the first
 * occurrence of the substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared.
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
