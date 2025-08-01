#ifndef HASH_TABLE_H
#define HASH_TABLE_H

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/* a function that create a hash table */
hash_table_t *hash_table_create(unsigned long int size);
/* a function that copies djb2 */
unsigned long int hash_djb2(const unsigned char *str);
/* a function that return an index in the hash table */
unsigned long int key_index(const unsigned char *key, unsigned long int size);
/* a function that that adds a new node in the hash table */
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
/* a function that gets the content in an hash table */
char *hash_table_get(const hash_table_t *ht, const char *key);
/* a function to print the hash table */
void hash_table_print(const hash_table_t *ht);
/* a function that free the hash table */
void hash_table_delete(hash_table_t *ht);

/* --- string utilities --- */
char *_strdup(const char *str);
int _strlen(const char *str);
int _strcmp(const char *str1, const char *str2);

#endif
