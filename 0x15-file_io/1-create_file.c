#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: what to write into the file
 * Return: 1 or -1
*/

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);
	fd = creat(filename, 00600);
	if (fd > -1)
	{
		fd = open(filename, O_WRONLY | O_TRUNC);
		if (fd > -1)
		{
			if (text_content != NULL)
			{
				write(fd, text_content, strlen(text_content));
			}
			close(fd);
			return (1);
		}
		else
			return (-1);
	}
	else
		return (-1);
}

