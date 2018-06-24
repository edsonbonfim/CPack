#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "CList.h"
#include "CQueue.h"

struct queue {

    List l;
};

Queue QueueInit(void) {

    Queue q = (Queue) malloc(sizeof(struct queue));

    if (q == NULL) {

        fprintf(stderr, "Could not create a queue");
        exit(EXIT_FAILURE);
    }

    q->l = ListInit();

    return q;
}

Queue QueueFree(Queue q) {

    ListFree(q->l);
    free(q);

    return NULL;
}

void* QueuePop(Queue q) {

    void *e = ListGet(q->l, 0);

    ListRemove(&q->l, 0);

    return e;
}

void QueuePush(Queue q, void *element) {

    ListAdd(&q->l, element);
}

bool QueueIsEmpty(Queue q) {

    return ListSize(q->l) == 0;
}
