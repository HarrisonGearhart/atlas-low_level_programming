#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - prints struct dog
 * @d: pointer to stucture
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (*d->owner == NULL)
		*d->owner = "(nil)";
	if (*d->name == NULL)
		*d->name = "(nil)";
	if (*d->age == NULL)
		*d->age = "(nil)";
	
	printf("Name: %s\n", *d.name);
	printf("Age: %f\n", *d.age);
	printf("Owner: %s\n", *d.owner);
}