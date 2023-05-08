#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reading text file printed
 * @filename: text file
 * @letters: letters number to be readed
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t f;
	ssize_t wr;
	ssize_t ts;

	f = open(filename, O_RDONLY);
	if (f == 0)
		return(1);
	buff = malloc(sizeof(char) *letters);
	ts = read(f, buff, letters);
	wr = write(STDOUT_FILENO, buff,ts);
	free(buff);
	close(f);
	return (wr);
}
