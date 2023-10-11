#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 *
  * Return: value associated with key, or NULL if key cannot be found
 */


char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *node;
unsigned long int index;

if (ht == NULL || key == NULL)
return (NULL);

index = key_index((const unsigned char *)key, ht->size);
node = ht->array[index];
while (node)
{
if (strcmp(node->key, key) == 0)
return (node->value);
node = node->next;
}
return (NULL);
}
