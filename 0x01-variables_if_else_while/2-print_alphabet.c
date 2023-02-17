#include <stdio.h>

/**
 * main - This function display the alphabet in lowercase
 *
 * Return: 0 Every time the code runs
 */
int main(void) 
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++) {
		putchar(letter);
	}
	putchar('\n');
	return(0);
}
