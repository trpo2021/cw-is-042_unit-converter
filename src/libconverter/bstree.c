#include <libconverter/bstree.h>

#include <stdlib.h>

BSTree* bstree_create(int key, char* value)
{
    BSTree* node;

    node = malloc(sizeof(*node));
    if (node != NULL) {
        node->key = key;
        node->value = value;
        node->left = NULL;
        node->right = NULL;
    }
    return node;
}

void bstree_add(BSTree* tree, int key, char* value)
{
    if (tree == NULL) {
        return;
    }
    BSTree* parent;
    BSTree* node;
    while (tree != NULL) {
        parent = tree;
        if (key < tree->key) {
            tree = tree->left;
        } else if (key > tree->key) {
            tree = tree->right;
        } else {
            return;
        }
    }
    node = bstree_create(key, value);
    if (key < parent->key) {
        parent->left = node;
    } else {
        parent->right = node;
    }
}

BSTree* bstree_lookup(BSTree* tree, int key)
{
    while (tree != NULL) {
        if (key == tree->key) {
            return tree;
        } else if (key < tree->key) {
            tree = tree->left;
        } else {
            tree = tree->right;
        }
    }
    return tree;
}