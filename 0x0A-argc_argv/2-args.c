#include <stdio.h>
/**
 * main- print all args
 * @argc : num of args
 * @argv : argument array
 * Return: always 0
 */
int main(int argc, char *argv)
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);
	return (0);
}
