#include "main.h"
/**
 * create_file - creating a file
 * @filename: pointer to the file created
 * @text_content: pointer to the string to the file
 * Return: 1 if it success or -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int f, wr, ln = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (ln = 0; text_content[ln];)
			ln++;
	}
	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(f, text_content, ln);

	if (f == -1 || wr == -1)
	{
		return (-1);
	}

	close(f);
	return (1);
}
