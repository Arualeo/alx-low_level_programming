#include "main.h"

/**
 * print_rev -  a function that prints a string, in reverse
 * @s: string
 * Return: always 0
 */

void print_rev(char *s)
{
	int len = 0, int o;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--
	for (o = len; o > 0 ; 0--)
	{
		_putchar(*s);
		s--
	}
	_putchar(\n)
}
