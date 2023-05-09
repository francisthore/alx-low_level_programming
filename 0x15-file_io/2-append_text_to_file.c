#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - appends text to a file
 * @filename: name of the file
 * @text_content: content to put into file
 * Return: 1 on Success and -1 on Failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd > -1)
	{
		if (text_content != NULL)
		{
			wr = write(fd, text_content, strlen(text_content));
			if (wr > -1)
			{
				close(fd);
				return (1);
			}
			close(fd);
			return (-1);
		}
		return (1);

	}
	else
		return (-1);
}
