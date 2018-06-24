#ifndef CSTACK_H
#define CSTACK_H

typedef struct stack *Stack;

Stack StackInit(void);

Stack StackFree(Stack s);

void* StackPop(Stack s);

void StackPush(Stack s, void *element);

_Bool StackIsEmpty(Stack s);

#endif
