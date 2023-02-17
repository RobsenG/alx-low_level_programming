#include <stdio.h>
/**
 * main - This function print both uppercase and lowercase of alphabet
 *
 * Return: 0 Every time the code run(Excute)
 */

int main(void)
{
	char letter;
	
	for (letter = 'a'; letter <= 'z'; letter++) 
	{
		putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');
	return(0);
}
