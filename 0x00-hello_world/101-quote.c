#include <stdio.h>
#include <unistd.h>
/**
 * main - display a text with put using printf and puts
 * Return: 1 after code excute
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
