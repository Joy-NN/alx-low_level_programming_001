#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print numbers of base 16 in lowercase
 * Return: Always 0
 */
int main(void)
{
	int num;
	char la;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (la = 'a'; la <= 'f'; la++)
		putchar(la);

	putchar('\n');

	return (0);
}
