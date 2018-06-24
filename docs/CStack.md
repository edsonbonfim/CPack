# CStack

These functions are declared in the **`CStack.h`** header file:

* [StackInit](#stackinit)
* [StackFree](#stackfree)
* [StackPop](#stackpop)
* [StackPush](#stackpush)
* [StackIsEmpty](#stackisempty)

___

### StackInit

```c
Stack StackInit(void);
```

[Source Code](https://github.com/EdsonOnildoJR/CPack/blob/007fe644a7da56d116d3cc150d2fbd2fb1651d02/src/CPack/CStack/CStack.c#L12)

Returns a new stack.

___

### StackFree

```c
Stack StackFree(Stack s);
```

[Source Code](https://github.com/EdsonOnildoJR/CPack/blob/007fe644a7da56d116d3cc150d2fbd2fb1651d02/src/CPack/CStack/CStack.c#L27)

Frees the memory used by the stack.

___

### StackPop

```c
void* StackPop(Stack s);
```

[Source Code](https://github.com/EdsonOnildoJR/CPack/blob/007fe644a7da56d116d3cc150d2fbd2fb1651d02/src/CPack/CStack/CStack.c#L35)

Removes and return an element of the stack.

___

### StackPush

```c
void StackPush(Stack s, void *e);
```

[Source Code](https://github.com/EdsonOnildoJR/CPack/blob/007fe644a7da56d116d3cc150d2fbd2fb1651d02/src/CPack/CStack/CStack.c#L46)

Appends the specified element to the stack.

___

### StackIsEmpty

```c
bool StackIsEmpty(Stack s);
```

[Source Code](https://github.com/EdsonOnildoJR/CPack/blob/007fe644a7da56d116d3cc150d2fbd2fb1651d02/src/CPack/CStack/CStack.c#L51)

Returns true if the stack is empty, else return false.