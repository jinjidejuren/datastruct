#ifndef _LIST_H_
#define _LIST_H_

typedef struct List_node{
    List_node *prev;
    List_node *next;
    void *data;
}List_node;

#endif
