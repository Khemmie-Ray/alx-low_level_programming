#include <stdio.h>

/**
 *   * main - prints lowercase alphabet
 *
 *       * Return: Always (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{											putchar(c);
		}
	}
		putchar('\n');

		return (0);

}
