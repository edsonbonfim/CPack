#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../CList/CList.h"
#include "CStack.h"

struct stack {

    List l;
};

Stack StackInit(void) {

    Stack s = (Stack) malloc(sizeof(struct stack));

    if (s == NULL) {

        fprintf(stderr, "Could not create a stack");
        exit(EXIT_FAILURE);
    }

    s->l = ListInit();

    return s;
}

Stack StackFree(Stack s) {

    ListFree(s->l);
    free(s);

    return NULL;
}

void* StackPop(Stack s) {

    int pos = ListSize(s->l)-1;

    void *e = ListGet(s->l, pos);

    ListRemove(&s->l, pos);

    return e;
}

void StackPush(Stack s, void *element) {

    ListAdd(&s->l, element);
}

bool StackIsEmpty(Stack s) {

    return ListSize(s->l) == 0;
}
