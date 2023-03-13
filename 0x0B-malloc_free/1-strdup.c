#include <stdlib.h>
#include "main.h"

/**
 *  * _strdup - return a pointer
 *   *
 *    * @str: a given string
 *     *
 *      * Return: pointer to the copy of the given string
 *       * NULL if str ==  NULL
 *        * NULL if fail
 *         */
char *_strdup(char *str)
{	char *copy;
		int i, lenght;

			if (str == NULL)
						return (NULL);
				for (i = 0; str[i]; i++)
							lenght++;
					copy = malloc(sizeof(char) * (lenght + 1));
						if (copy == NULL)
									return (NULL);
							for (i = 0; str[i]; i++)
										copy[i] = str[i];
								copy[lenght] = '\0';
									return (copy);
}
