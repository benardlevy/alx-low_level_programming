#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all possible different combinations of two digits
 * Return: Always 0
 */

int main(void)
{
	int n;
	int m;

	for (n = 0; m < 9; n++)
	{
	for (m = n + 1; n <= 9; m++)
	{
	if (m != n)
	{
	putchar(n);
	putchar(m);
	if (n == 8 && m == 9)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}








