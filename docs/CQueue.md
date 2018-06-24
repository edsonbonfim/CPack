# CQueue

These functions are declared in the **`CQueue.h`** header file:

* [QueueInit](#queueinit)
* [QueueFree](#queuefree)
* [QueuePop](#queuepop)
* [QueuePush](#queuepush)
* [QueueIsEmpty](#queueisempty)

___

### QueueInit

```c
Queue QueueInit(void);
```

[Source Code](https://github.com/EdsonOnildoJR/CPack/blob/305edee64dbaa6d86c3e2276e51346638ba92234/src/CPack/CQueue/CQueue.c#L12)

Returns a new queue.

___

### QueueFree

```c
Queue QueueFree(Queue q);
```

[Source Code](https://github.com/EdsonOnildoJR/CPack/blob/305edee64dbaa6d86c3e2276e51346638ba92234/src/CPack/CQueue/CQueue.c#L27)

Frees the memory used by the queue.

___

### QueuePop

```c
void* QueuePop(Queue q);
```

[Source Code](https://github.com/EdsonOnildoJR/CPack/blob/305edee64dbaa6d86c3e2276e51346638ba92234/src/CPack/CQueue/CQueue.c#L35)

Removes and return an element of the queue.

___

### QueuePush

```c
void QueuePush(Queue q, void *e);
```

[Source Code](https://github.com/EdsonOnildoJR/CPack/blob/305edee64dbaa6d86c3e2276e51346638ba92234/src/CPack/CQueue/CQueue.c#L44)

Appends the specified element to the queue.

___

### QueueIsEmpty

```c
bool QueueIsEmpty(Queue q);
```

[Source Code](https://github.com/EdsonOnildoJR/CPack/blob/305edee64dbaa6d86c3e2276e51346638ba92234/src/CPack/CQueue/CQueue.c#L49)

Returns true if the queue is empty, else return false.