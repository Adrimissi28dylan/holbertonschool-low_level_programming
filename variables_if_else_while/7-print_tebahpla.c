#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - print the alphabet from a to z
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int letra = 'z';

	while (letra >= 'a')
	{
		putchar (letra);
		letra--;
	}
	putchar('\n');
	return (0);
}
