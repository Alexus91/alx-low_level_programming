#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to the file
 * @text_content: the string to add the end of file
 * Return: 1 if succeed , -1 it it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, ln = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (ln = 0; text_content[ln];)
			ln++;
	}
	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, ln);

	if (op == -1 || wr == -1)
		return (-1);
	close(op);
	return (1);
}
