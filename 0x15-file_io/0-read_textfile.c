#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it
 * @filename: the name of the file
 * @letters: number of letters
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t rd, wr;
char *buff;

if (!filename)
{
return (0);
}

fd = open(filename, O_RDONLY);

if (fd == -1)
{
return (0);
}

buff = malloc(sizeof(char) * letters);
if (!buff)
return (0);

rd = read(fd, buff, letters);
wr = write(STDOUT_FILENO, buff, rd);

close(fd);
free(buff);
return (wr);

}
