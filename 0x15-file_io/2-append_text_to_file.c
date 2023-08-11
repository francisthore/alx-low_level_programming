#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - appends text to a file
 * @filename: name of file
 * @text_content: text to be appended
 * Return: 1 on success or -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t len = 0, i;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (!text_content && fd > 0)
		return (1);
	for (i = 0; text_content[i] != '\0'; i++)
		len++;
	if (write(fd, text_content, len) == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
