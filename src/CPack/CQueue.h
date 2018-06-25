#ifndef CQUEUE_H
#define CQUEUE_H

typedef struct queue *Queue;

Queue QueueInit(void);

Queue QueueFree(Queue s);

void* QueuePop(Queue s);

void QueuePush(Queue s, void *element);

_Bool QueueIsEmpty(Queue s);

#endif