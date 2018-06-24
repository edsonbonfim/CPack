CPack
=====
CPack is a compilation of things that should be in the C standard library, but they are not.

Features:
-------
* [Linked List](#Linked-List)
* Stack
* Queue


Linked List
---------
**Returns a new list:**
```c
List ListInit(void);
```
**Frees the memory used by the list:**
```c
List ListFree(List l);
```
**Appends the specified element to the end of the list:**
```c
void ListAdd(List *l, void *e);
```
**Returns the element at the specified position in the list:**
```c
void *ListGet(List l, int i);
```
**Removes the element at the specified position in the list:**
```c
void ListRemove(List *l, int i);
```
**Replaces the element at the specified position in the list with the specified element:**
```c
void ListSet(List *l, int i, void *e);
```
**Returns the nnumber of elements in the list:**
```c
int ListSize(List l);
```