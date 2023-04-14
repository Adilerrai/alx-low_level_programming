#include "main.h"

/**
 * append_text_to_file - adds text at EOF
 * @filename: file to append data to
 * @text_content: data to append to file
 *
 * Return: 1 on success, -1 on error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, ret;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		len = 0;
		while (text_content[len])
			len++;
		ret = write(fd, text_content, len);
		if (ret == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
