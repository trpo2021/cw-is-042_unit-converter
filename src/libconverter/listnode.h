#pragma once

typedef struct ListNode {
    int key;
    char* category;
    char* unit;
    double factor;
    struct ListNode* next;
} ListNode;

ListNode* list_addfront(
        ListNode* list, int key, char* category, char* unit, double factor);
ListNode* list_lookup(ListNode* list, char* category, char* unit);
ListNode* list_lookup_by_key(ListNode* head, int key);
ListNode* list_delete(ListNode* list, char* category, char* unit);
void freelist(ListNode* head);