#include "main.h"
/**
 * _isalpha - Checks for alphabetic order
 *
 * @c: look for c
 *
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}
