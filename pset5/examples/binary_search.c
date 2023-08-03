// Implements a list of numbers as a binary search tree

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{

    int numberToFind = 3;
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