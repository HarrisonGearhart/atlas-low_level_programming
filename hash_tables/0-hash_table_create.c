#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: a pointer to the new table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *new;

	if (size == 0)
		return (NULL);

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);

	new->array = mallac(sizeof(hash_node_t) * size);
	if (new->array == NULL)
		return (NULL);

	new->size = size;

	for (size = 0; i < size; i++)
		new->array[i] = NULL;

	return (new);
}
