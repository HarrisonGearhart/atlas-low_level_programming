#ifndef dog_h
#define dog_h
#include <stdlib.h>
#include <stdio.h>
/**
 * struct dog - struct giving details about a dog
 * @name: dog's name
 * @age: age of dog
 * @owner: dog owner's name
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
