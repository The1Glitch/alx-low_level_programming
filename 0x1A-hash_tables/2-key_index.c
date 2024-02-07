#include "hash_tables.h"

/**
 * key_index - get the index at which a key/value
 *             pair should be stored in araay of hash table.
 * @key: the key to get the index of
 * @size: the size of the array of the hash table
 *
 * Return: the index of the key
 * Description: uses the djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
