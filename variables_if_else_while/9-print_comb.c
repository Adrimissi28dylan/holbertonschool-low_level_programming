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
	int numero;

	for (numero = '0'; numero <= '9'; numero++)
	{
		putchar (numero);
		if (numero != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);

}
