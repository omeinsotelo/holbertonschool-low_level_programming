#ifndef FUNCTION
#define FUNCTION
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
#endif
