#include <stdio.h>
#include <stdlib.h>
#include "Node.h"
#include "List.h"

struct list {
    int size;
    Node node;
    Node last;
};

List ListInit(void) {

    List list = (List) malloc(sizeof(struct list));

    if (list == NULL) {

        fprintf(stderr, "Erro ao criar lista, endereco de memoria nao pode ser alocado");
        exit(-1);
    }

    list->node = NodeInit();
    list->last = NodeInit();
    list->size = 0;

    return list;
}

List ListFree(List list) {

    list->node = NodeFree(list->node);
    free(list);

    return NULL;
}

void ListAdd(List *list, void *element) {

    NodeAdd(&(*list)->node, &(*list)->last, element);
    (*list)->size++;
}

void *ListGet(List list, int index) {

    return NodeGet(list->node, index);
}

void ListRemove(List *list, int index) {

    NodeRemove(&(*list)->node, &(*list)->last, ListSize(*list), index);
    (*list)->size--;
}

void ListSet(List *list, int index, void *element) {

    NodeSet(&(*list)->node, index, element);
}

int ListSize(List list) {

    return list->size;
}
