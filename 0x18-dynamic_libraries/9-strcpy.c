#include <string.h>
/**
 * _strcpy - copy a string into a buffer
 * @dest: buffer
 * @src: string to copy
 *
 * Description: The *_strcpy() function copies
 * the pointed to src variable value to the buffer
 * pointed to by the variable dest
 * Return: return a pointer to  the  destination
 * string dest
 */
char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}
