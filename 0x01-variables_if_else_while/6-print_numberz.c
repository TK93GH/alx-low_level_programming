#include <stdio.h>
/**
 * main -main block
 * Description: Prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */

int main(void)
{
	int i;

	int j = 48;

	for (i = 0; i < 10; i++, j++);
	
	{
		putchar(j);
	}

	putchar('\n');
	return (0);
}
