#include "function_pointers.h"
#include <stdio.h>

/**
  * print_name - Prints name in two forms
  * @name: Name passed to print_name
  * @f: Function pointer
  *
  * Return: Nothing
  */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	{
		(*f)(name);
	}
}
