#include <stdio.h>
/**
 * main - Prints all arguments it receives.
 * @argc: number of args
 * @argv: An array of args
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
