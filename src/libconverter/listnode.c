#include <libconverter/listnode.h>

#include <stdlib.h>
#include <string.h>

static ListNode* list_createnode(int key, char* category, char* unit, double factor)
{
    ListNode* p;

    p = malloc(sizeof(*p));
    if (p != NULL) {
        p->key = key;
        p->category = category;
        p->unit = unit;
        p->factor = factor;
        p->next = NULL;
    }
    return p;
}

ListNode* list_addfront(ListNode* list, int key, char* category, char* unit, double factor)
{
    ListNode* newnode;
    newnode = list_createnode(key, category, unit, factor);

    if (newnode != NULL) {
        newnode->next = list;
        return newnode;
    }
    return list;
}

ListNode* list_lookup(ListNode* list, char* category, char* unit)
{
    while (list != NULL) {
        if (strcmp(list->category, category) == 0 && strcmp(list->unit, unit) == 0) {
            return list;
        }
    }
    return NULL;
}

ListNode* list_lookup_by_key(ListNode* head, int key)
{
    if (key <= 0) {
        return head;
    }
    ListNode* p1 = head;
    ListNode* p2 = head;

    for (int i = 0; i < key - 1; ++i) {
        if (p2 == NULL) {
            return NULL;
        }
        p2 = p2->next;
    }
    if (p2 == NULL) {
        return NULL;
    }
    while (p2->next != NULL) {
        p1 = p1->next;
        p2 = p2->next;
    }
    return p1;
}