#include <stdio.h>
#include <stdlib.h>
#include "Node.h"

struct node {
    void *element;
    Node prox;
};

void NodeCheckMalloc(Node node) {

    if (node == NULL) {

        fprintf(stderr, "Erro ao inserir novo no, endereco de memoria nao pode ser alocado");
        exit(-1);
    }
}

Node NodeInit(void) {

    return NULL;
}

Node NodeFree(Node node) {

    if (node != NULL) {

        node->prox = NodeFree(node->prox);
        free(node);
    }

    return NULL;
}

void NodeAdd(Node *node, Node *last, void *element) {

    Node append = (Node) malloc(sizeof(struct node));
    NodeCheckMalloc(append);

    append->element = element;
    append->prox = NULL;

    if (*last == NULL)
        *node = append;
    else
        (*last)->prox = append;

    *last = append;
}

Node NodeSubNode(Node node, int index) {

    int i = 0;

    for (Node tmp = node; tmp != NULL; tmp = tmp->prox, i++)
        if (i == index)
            return tmp;

    return NULL;
}

void *NodeGet(Node node, int index) {

    node = NodeSubNode(node, index);

    return node != NULL ? node->element : NULL;
}

void NodeRemove(Node *node, Node *last, int size, int index) {

    // Elemento a ser removido eh o primeiro da lista
    if (index == 0) {

        Node tmp = *node;
        *node = (*node)->prox;
        free(tmp);

        return;
    }

    int i = 0;

    for (Node tmp = *node; tmp != NULL; tmp = tmp->prox, i++) {

        if (i == index-1) {

            Node tmp2 = tmp->prox;
            tmp->prox = tmp2->prox;

            // Caso o elemento a ser removido seje o ultimo da lista
            // o ponteiro para o ultimo elemento deve ser atualizado
            if (size-1 == index)
                *last = tmp;

            break;
        }
    }
}

void NodeSet(Node *node, int index, void *element) {

    int i = 0;

    for (Node tmp = *node; tmp != NULL; tmp = tmp->prox, i++) {

        if (i == index) {

            (*node)->element = element;
            break;
        }
    }
}