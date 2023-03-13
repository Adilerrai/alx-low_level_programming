nclude <stdlib.h>
#include "main.h"

/**
 *  * create_array - creates an array of chars
 *   *
 *    * @size: size of array
 *     * @c: a given character
 *      *
 *       * Return: NULL if size of array is 0, NULL if fail,pointe to the array
 *        */
char *create_array(unsigned int size, char c)
{
		char *buffer;
			unsigned int pos;

				if (size == 0)
							return (NULL);

					buffer = (char *) malloc(size * sizeof(c));
						if (buffer == 0)
									return (NULL);

							pos = 0;
								while (pos < size)
										{
													*(buffer + pos) = c;
															pos++;
																}
									return (buffer);
}

