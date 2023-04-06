#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * create_file - Creates a file
 * @filename: Filename to create
 * @text: String to write to the file
 * Return: 1 if successful, else -1
 */
int create_file(const char *filename, char *text)
{
	int fdo, fdw, len = 0;

	if (filename == NULL)
		return (-1);

	fdo = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fdo < 0)
		return (-1);

	while (text && *(text + len))
		len++;

	fdw = write(fdo, text, len);
	close(fdo);
	if (fdw < 0)
		return (-1);
	return (1);
}
