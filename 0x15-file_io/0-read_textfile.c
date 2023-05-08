#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *  * read_textfile - reads a textfile and prints the contents
 *   * to POSIX STDOUT
 *    * @filename: name of the file to read from
 *     * @letters: number of characters to print to STDOUT
 *      *
 *       * Return: number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_discriptor = 0, check = 0;
	char *buffer;

	if (!filename  || !letters)
		return (0);

	file_discriptor = open(filename, O_RDONLY);
		if (file_discriptor < 0)
			return (0);

	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
		return (0);

	check = read(file_discriptor, buffer, letters);
	check = read(STDOUT_FILENO, buffer, check);
	if (check < 0)

		return (0);



	close(file_discriptor);
	free(buffer);
	return (check);
}
