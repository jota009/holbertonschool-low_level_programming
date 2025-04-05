#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void error_exit(int exit_code, const char *message, const char *file_name)
{
	if (file_name)
		dprintf(STDERR_FILENO, "%s %s\n", message, file_name);
	else
		dprintf(STDERR_FILENO, "%s\n," message);
	exit(exit_code);
}
