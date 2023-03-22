#include <stdio.h>
#include "function_pointers"

/**
 * print_name - function to print name
 *
 * @name: name to print
 * @f: function pointer that doesn't return anything
 *
 * Return: Always 0 (Success)
*/



void print_name(char *name, void (*f)(char *))
{
f(name);
}
