#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Function pointer that prints a name
 * @name: String name
 * @f: Function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
