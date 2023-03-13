#include <stdlib.h>
#include "main.h"

/**
 *  * str_concat - creates an array of chars
 *   *
 *    * @s1: first string
 *     * @s2: a second string
 *      *
 *       * Return: NULL if size of array is 0
 *        * NULL if fail
 *         * pointer to the string
 *          */
char *str_concat(char *s1, char *s2)
{
		char *concat_str;
			int i, concat_index = 0, lenght = 0;

				if (s1 == NULL)
							s1 = "";
					if (s2 == NULL)
								s2 = "";
						for (i = 0; s1[i] || s2[i]; i++)
									lenght++;

							concat_str = malloc(sizeof(char) * lenght);
								if (concat_str == NULL)
											return (NULL);
									for (i = 0; s1[i]; i++)
												concat_str[concat_index++] = s1[i];
										for (i = 0; s2[i]; i++)
													concat_str[concat_index++] = s2[i];
											return (concat_str);
}
