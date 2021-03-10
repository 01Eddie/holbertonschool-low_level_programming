#include "function_pointers.h"

/**
 * print_name - prints a name as is
 * @name: Character
 * @f: void
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	(*f)(name);
}
