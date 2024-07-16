#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to hash table
 * @key: the key to add. Can't be an empty string
 * @value: value of key
 * Return: 0 for fail, 1 for success
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_copy;
	unsigned long int k_index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	k_index = key_index((const unsigned char *)key, ht->size);
	for (i = k_index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}

	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return(0);
	}

	new->value = value_copy;
	new->next = ht->array[k_index];
	ht->array[k_index] = new;
	return (1);
}
