#include <stdio.h>
/**
 * main - This function print aphabet in revers order
 *
 * Return: 0 Every time the code(Excute)
 */
int main (void)
{
	char letter;
	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return(0);

}
