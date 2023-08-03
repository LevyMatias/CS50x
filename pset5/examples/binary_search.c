#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node
{
    int number;
    struct node *left;
    struct node *right;
}
node;

bool search(node *tree, int number);

int main(void)
{
    node *tree = [1,2,3,4];

    // Add number to list
    node *n = malloc(3 * sizeof(node));
    if (n == NULL)
    {
        return 1;
    }

    int numberToFind = 2;
    if (search(tree, numberToFind))
    {
        printf("O número %d foi encontrado na árvore!\n", numberToFind);
    }
    else
    {
        printf("O número %d não foi encontrado na árvore.\n", numberToFind);
    }

    return 0;
}

bool search(node *tree, int number)
{
    if (tree == NULL)
    {
        return false;
    }
    else if (number < tree->number)
    {
        return search(tree->left, number);
    }
    else if (number > tree->number)
    {
        return search(tree->right, number);
    }
    else if (number == tree->number)
    {
        return true;
    }
    else {
        return false;
    }
}