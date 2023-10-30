#include "main.h"

/**
 * append_text_to_file - appends the text at the end of the file.
 * @filename: Pointer to the name of a file.
 * @text_content: String adds to the end of a file.
 *
 * Return: The function fail or filename is NULL - -1.
 *         The file does not exists the user lacks write permissions - -1.
 *         otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
