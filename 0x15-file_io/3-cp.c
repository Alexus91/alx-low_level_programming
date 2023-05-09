#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *buffer_creation(char *file);
void close_f(int f);
/**
 * buffer_creation - alloction 1024 bytes for the buff
 * @file: name file buffer
 *
 * Return: pointer to new allocated buffer.
 */
char *buffer_creation(char *file)
{
	const int BUFFER_SIZE = 1024;
	char *buffer = malloc(sizeof(char) * BUFFER_SIZE);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file - file descriptors
 * @f: file descriptor to be closed
 */
void close_file(int f)
{
	if (close(f) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
		exit(100);
	}
}
/**
 * main - copies the contents from a file to an other one.
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 * Return: 0 (success)
 */
int main(int argc, char  *argv[])
{
	int from, to, rd, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "use: cp file_from file_to\n");
		exit(97);
	}
	buffer = buffer_creation(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do

	{
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		wr = write(to, buffer, rd);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		rd = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	}

	while (rd > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
