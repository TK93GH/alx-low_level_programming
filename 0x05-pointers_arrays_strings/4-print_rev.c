#include "main.h"
#include "holberton.h"
/**
 * print_rev - prints reversed string, followed by a new line
 * 
 * @s: The string input
 * Return: void
*/

void print_rev(char *s)
{
	int i, len;

	len = 0;

	for (i =0; s[i] != '0'; i++)
	{
		len = i;
	}

	for (i = len; i >= 0; i--)
	{
		putchar(s[i]);
	}
	_putchar('\n');
}
