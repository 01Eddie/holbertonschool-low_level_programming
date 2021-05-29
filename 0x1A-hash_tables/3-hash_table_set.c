#include "hash_tables.h"

/**
 * hash_table_set - check the code for Holberton School students.
 * @ht: pointer of hash_table_t
 * @key: pointer constant character
 * @value: pointer constant character
 * Return: 1 or 0
 */

// Write a function that adds an element to the hash table.
// 
// Prototype: int hash_table_set(hash_table_t *ht, const char *key, const char *value);
// Where ht is the hash table you want to add or update the key/value to
// key is the key. key can not be an empty string
// and value is the value associated with the key. value must be duplicated. value can be an empty string
// Returns: 1 if it succeeded, 0 otherwise
// In case of collision, add the new node at the beginning of the list
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL, *oldhead, *tmp;
	unsigned long int hash_index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	if (strlen(key) < 1)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if(node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	hash_index = key_index((const unsigned char *)key, ht->size);
	/* verified if value is NULL. If not make linked list*/
	if (ht->array[hash_index] == NULL)
		ht->array[hash_index] = node;
	else
	{
		oldhead = ht->array[hash_index];
		for (tmp = oldhead; tmp != NULL; tmp = tmp->next)
		{
			if (strcmp(key, tmp->key) == 0)
			{
				free(tmp->value);
				tmp->value = strdup(value);
				free(node->value);
				free(node);
				return (1);
			}
		}
		node->next = oldhead;
		ht->array[hash_index] = node;
	}
	return (1);
}
