// Implements a dictionary's functionality
#include <stdbool.h>
#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "dictionary.h"

#define HASHTABLE_SIZE 10000

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// Hash table
node *table[HASHTABLE_SIZE];
int word_count = 0;

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    int index = hash(word);
    node *cursor = table[index];
    while(cursor != NULL) {
        if(strcasecmp(cursor->word, word) == 0) {
            return true;
        }
        cursor = cursor->next;
    }
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    unsigned int sum = 0;
    for (int i = 0; word[i] != '\0'; i++)
    {
        sum += tolower(word[i]);
    }
    return sum % HASHTABLE_SIZE;
}


// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // Open dictionary file
    FILE *file = fopen(dictionary, "r");
    if (file == NULL)
    {
        return false;
    }

    // Initialize hash table
    for (int i = 0; i < HASHTABLE_SIZE; i++)
    {
        table[i] = NULL;
    }

    // Read words from dictionary and insert into hash table
    char word[LENGTH + 1];
    while (fscanf(file, "%s", word) != EOF)
    {
        // Create a new node for the word
        node *new_node = malloc(sizeof(node));
        if (new_node == NULL)
        {
            fclose(file);
            return false;
        }

        // Copy the word into the new node
        strcpy(new_node->word, word);

        // Hash the word to get an index
        int index = hash(word);

        // Insert the new node at the beginning of the linked list at the index
        new_node->next = table[index];
        table[index] = new_node;

        word_count++;
    }

    fclose(file);

    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    return word_count;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // Iterate through buckets
    for (int i = 0; i < HASHTABLE_SIZE; i++) {
        node *cursor = table[i];
        while (cursor) {
            node *tmp = cursor;
            cursor = cursor->next;
            free(tmp);
        }

    }
    return true;
}
