#include <stdio.h>
/**
 * main - This function print lowercase alphabet except q and e
 *
 * Return: 0 Every time the code run(Excute)
 */
int main(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
		if (letter == 'e')
			continue;
		else if (letter == 'q')
			continue;	
		else
			putchar(letter);
	putchar('\n');
	return(0);

}
