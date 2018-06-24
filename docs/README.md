# CPack 1.0 Documentation
This is the full documentation for CPack 1.0.x

## Table of Contents
* [Linked List](#linked-list)
* [Stack](#stack)
* [Queue](#queue)

## Linked List
Returns a new list:
```c
List ListInit(void);
```
Frees the memory used by the list:
```c
List ListFree(List l);
```
Appends the specified element to the end of the list:
```c
void ListAdd(List *l, void *e);
```
Returns the element at the specified position in the list:
```c
void *ListGet(List l, int i);
```
Removes the element at the specified position in the list:
```c
void ListRemove(List *l, int i);
```
Replaces the element at the specified position in the list with the specified element:
```c
void ListSet(List *l, int i, void *e);
```
Returns the number of elements in the list:
```c
int ListSize(List l);
```