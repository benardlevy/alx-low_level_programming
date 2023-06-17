#include <stdio.h>
/**
 * main - prints the numbers in base 16
 * Return: Always 0
 */
int main(void)
{
	int n;
	int a;

	for (n = 48; n <= 57; n++)
		putchar(n);

	for (a = 97; a <= 102; a++)
		putchar(a);

	putchar('\n');
	return (0);
}
