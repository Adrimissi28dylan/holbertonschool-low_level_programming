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
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
