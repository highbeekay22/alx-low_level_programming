#include <studio.h>

/**
 * main - main function
 *
 * Return: Always 0
 */

int main(void)
{
	char i;

	for (i = 'a' : <= 'z' i++)
		putchar(i);
	for (i = 'A' : <= 'Z' i++)
		putchar(i);
	putchar('\n');
	return (0);
