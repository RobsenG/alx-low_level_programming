#include <stdio.h>
/**
 * main - this function display the size of datatype
 * Return: 0 after the code excute
 */

int main(void)
{
	int i;
	char c;
	float f;
	printf("Size of a char: %c bytes(s)\n", sizeof(c));
	printf("Size of an int: %d bytes(s)\n", sizeof(i));
	printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long long int: %lli bytes(s)\n", (unsigned long long)sizeof(i));
	printf("Size of a float: %f bytes(s)\n", sizeof(f));
	return (0);
}

