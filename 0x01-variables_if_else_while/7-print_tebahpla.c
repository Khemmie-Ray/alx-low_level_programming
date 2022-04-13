#include <stdio.h>

/**
 *   * main - print the reverse of lowercase alphabet
 *
 *       * Return: Always (Success)
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

		putchar('\n');

		return (0);

}
