#include <string.h>
/**
 * _memset - fill memory with a constant byte
 * @s: memory area pointed to
 * @b: the constant byte to fill with
 * @n: the number of bytes to fill
 *
 * Description: The _memset() function fills the first
 * n bytes of the memory area pointed to by s with
 * the constant byte b.
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
