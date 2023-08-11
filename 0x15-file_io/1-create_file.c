#include <unistd.h>
#include <fcntl.h>
/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: content to be written into the file
 * Return: 1 on success or -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t i, len = 0;

	if (!filename || !text_content)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd < 0)
	{
		return (-1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
		len++;
	if (write(fd, text_content, len) == -1)
		return (-1);
	return (1);
}
