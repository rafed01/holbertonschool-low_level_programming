#ifndef DOGH
#define DOGH

#include <stdio.h>
/**
 * struct dog - dog information
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the name of the owner
 *
 * Description: dog struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;

};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
