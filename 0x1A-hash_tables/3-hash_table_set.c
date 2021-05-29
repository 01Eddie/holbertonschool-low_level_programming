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
	if (ht == NULL)
		return (0);
	char index_key = hash_djb2(key);
	key->next = value;
	return (1);
}
