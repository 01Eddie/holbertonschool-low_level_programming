#include "hash_tables.h"

/**
 * hash_table_create - function that allow create table
 * @size: unsigned long int
 * Return: create_t
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *create_t;
	hash_node_t **new_array;
	unsigned long int i;

	create_t = malloc(sizeof(hash_table_t));
	if (create_t == NULL)
		return (NULL);
	create_t->size = size;
	new_array = malloc(sizeof(unsigned long int) * size);
	for (i = 0; i < size; i++)
		new_array[i] = NULL;
	create_t->array = new_array;
	return (create_t);
}
