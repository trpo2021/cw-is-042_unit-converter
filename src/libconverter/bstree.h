#pragma once

typedef struct BSTree {
    int key;
    char* value;

    struct BSTree* left;
    struct BSTree* right;
} BSTree;

BSTree* bstree_create(int key, char* value);
void bstree_add(BSTree* tree, int key, char* value);
BSTree* bstree_lookup(BSTree* tree, int key);