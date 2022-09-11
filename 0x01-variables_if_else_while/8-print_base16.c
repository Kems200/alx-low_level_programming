#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints all the numbers of base 16 in lowercase, \n
 * Return: Always 0
 */
int main(void)
{
	char ch;
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
