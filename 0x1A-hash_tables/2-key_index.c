#include "hash_tables.h"

/**
 * key_index - functions that gives you the index of a key
 * @key: constant unsigned character
 * @size: unsigned long integer
 * Return: index_key
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index_key;

	index_key = hash_djb2(key) % size;

	return (index_key);
}
