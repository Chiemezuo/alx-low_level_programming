#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * append_text_to_file - Appends text at the end to the  file
 * @filename: Filename to open and append in
 * @text: NULL terminated string to add
 * Return: 1 if successful, else -1
 */
int append_text_to_file(const char *filename, char *text)
{
	int fdo, fdw, len = 0;

	if (filename == NULL)
		return (-1);

	fdo = open(filename, O_RDWR | O_APPEND);
	if (fdo < 0)
		return (-1);
	if (text == NULL)
	{
		close(fdo);
		return (1);
	}

	while (*(text + len))
		len++;

	fdw = write(fdo, text, len);
	close(fdo);
	if (fdw < 0)
		return (-1);

	return (1);
}
