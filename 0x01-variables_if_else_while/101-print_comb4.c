#include <stdio.h>

/**
 * main - Function
 *
 * Return: Always 0.
 */
int main(void)
{
	int p1, p2, p3

	for (p1 = 0; p1 < 8; p1++)
	{
		for (p2 = p1 + 1; p2 < 9; p2++)
		{
			for (p3 = p2 + 1; p3 < 10; p3++)
			{
				putchar((p1 % 10) + '0');
				putchar((p2 % 10) + '0');
				putchar((p3 % 10) + '0');

				if (p1 == 7 && p2 == 8 && p3 == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
