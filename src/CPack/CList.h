#ifndef CLIST_H
#define CLIST_H

typedef struct list *List;

/**
 * Cria uma nova lista vazia
 * @return NULL
 */
List ListInit(void);

/**
 * Libera a memoria alocada para a lista l
 * @param l
 * @return NULL
 */
List ListFree(List list);

/**
 * Adiciona o elemento especificado para o final da lista
 * @param l
 * @param e
 */
void ListAdd(List *list, void *element);

/**
 * Retorna o elemento da lista na posicao especificada
 * @param l
 * @param index
 * @return element
 */
void *ListGet(List list, int index);

/**
 * Remove o elemento da lista na posicao especificada
 * @param l
 * @param index
 */
void ListRemove(List *list, int index);

/**
 * Substitui o elemento na posicao especificada da lista com o elemento especificado
 * @param l
 * @param index
 * @param element
 */
void ListSet(List *list, int index, void *element);

/**
 * Retorna o numero de elementos na lista
 *
 * @param list lista
 * @return Numero de elementos na lista
 */
int ListSize(List list);

#endif
