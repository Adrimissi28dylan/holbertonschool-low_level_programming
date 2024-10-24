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
	int letra = 'a';
	int mayuscula = 'A';

	while (letra <= 'z')
	{
		putchar(letra);
		letra++;
	}
	while (mayuscula <= 'Z')
	{
		putchar (mayuscula);
		mayuscula++;
	}

	putchar('\n');
	return (0);
}
