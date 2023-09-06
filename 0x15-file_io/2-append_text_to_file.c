#include "main.h"

/**
 * append_text_to_file - append to text at the end of th file
 * @filename: Pointer to name of the file
 * @text_content: String to add to the end of the file
 *
 * Return: The function fails or filename is NULL - -1
 *   if the file doesn't exist the user lacks write permiss
 *   otherwise -1
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
