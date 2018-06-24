#ifndef LIST_NODE_H
#define LIST_NODE_H

typedef struct node *Node;

Node NodeInit(void);

Node NodeFree(Node node);

void NodeAdd(Node *node, Node *last, void *element);

void NodeRemove(Node *node, Node *last, int size, int index);

void *NodeGet(Node node, int index);

void NodeSet(Node *node, int index, void *element);

int NodeSize(Node node);

#endif
