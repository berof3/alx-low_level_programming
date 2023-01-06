#include <stdio.h>
#include "main.h"


/**
 * _puts- prints a string followed by a new line
 * @s: is a pointer to a string
 *
 * Return: none
 */

void _puts(char *s)
{

	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
