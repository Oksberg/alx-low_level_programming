#include "function_pointers.h"

/**
  * print_name - Prints name in two forms
  * @name: Name passed to print_name
  * @f: Function pointer
  *
  * Return: Nothing
  */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
