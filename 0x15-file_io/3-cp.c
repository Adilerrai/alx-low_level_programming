#include "main.h"
/**
 * buffer - Title
 * @file: argument
 *
 * Return: return p
 */
char *buffer(char *file)
{
	char *p;

	p = malloc(sizeof(char) * 1024);
	if (p == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (p);
}
/**
 * close_file - Title
 * @fd: argument
 */
void close_file(int fd)
{
	int cls_f;

	cls_f = close(fd);
	if (cls_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - Title
 * @argc: argument 1
 * @argv: argument 2
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int from, to, rd, wrt;
	char *p;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp from_position to_position\n");
		exit(97);
	}
	p = buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, p, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(p);
			exit(98);
		}
		wrt = write(to, p, rd);
		if (to == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(p);
			exit(99);
		}
		rd = read(from, p, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);
	free(p);
	close_file(from);
	close_file(to);
	return (0);
}
