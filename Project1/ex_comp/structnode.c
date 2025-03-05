#include <stdio.h>
#include <stdlib.h>

typedef struct _node{
    int value;
    struct _node* next;
}IntNode;

IntNode* head;
