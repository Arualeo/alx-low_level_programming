#include <stdio.h>
/**
 * main-Entry point
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
