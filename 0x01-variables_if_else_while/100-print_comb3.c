#include <stdio.h>

/** 
main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, k;

	i = 0;

	while (i < 100)
	{
		j = i % 10; /* singles digit */
		k = i / 10; /* doubles digit */

		if (k < j)
		{
			putchar(k + '0');
			putchar(j + '0');

			if (i < 89)
			{
				putchar(44);
				putchar(32);
			}
		}

		i++;
	}
	putchar('\n');

	return (0);
}