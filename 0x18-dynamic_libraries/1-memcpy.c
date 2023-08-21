#include <string.h>
/**
 * _memcpy - copies memory area
 * @dest: where to copy to
 * @src: where to copy from
 * @n: the number of bytes to copy
 *
 * Description: The _memcpy() function copies n bytes
 * from memory area src to memory area dest.
 * Return: pointer to the memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
