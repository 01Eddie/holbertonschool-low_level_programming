// A complete working C program to demonstrate all
// insertion before a given node
#include <stdio.h>
#include <stdlib.h>
 
// A linked list node
typedef struct Node {
    int info;
    struct Node* sig;
    struct Node* ant;
} dlistint_t;
 
/* Given a reference (pointer to pointer) to the head of a
list and an int, inserts a new node on the front of the
list. */
void insertar(dlistint_t** cab_ref, int nueva_info)
{
    dlistint_t* nuevo_nodo = (dlistint_t*)malloc(sizeof(dlistint_t));
 
    nuevo_nodo->info = nueva_info;
    nuevo_nodo->sig = (*cab_ref);
    nuevo_nodo->ant = NULL;
 
    if ((*cab_ref) != NULL)
        (*cab_ref)->ant = nuevo_nodo;
 
    (*cab_ref) = nuevo_nodo;
}
 
/* Given a node as next_node, insert a new node before the
 * given node */
void insertBefore(dlistint_t** cab_ref, dlistint_t* sig_nodo, int nueva_info)
{
    /*1. check if the given next_node is NULL */
    if (sig_nodo == NULL) {
        printf("the given next node cannot be NULL");
        return;
    }
 
    /* 2. allocate new node */
    dlistint_t* nuevo_nodo = (dlistint_t*)malloc(sizeof(dlistint_t));
 
    /* 3. put in the data */
    nuevo_nodo->info = nueva_info;
 
    /* 4. Make prev of new node as prev of next_node */
    nuevo_nodo->ant = sig_nodo->ant;
 
    /* 5. Make the prev of next_node as nuevo_nodo */
    sig_nodo->ant = nuevo_nodo;
 
    /* 6. Make next_node as next of nuevo_nodo */
    nuevo_nodo->sig = sig_nodo;
 
    /* 7. Change next of nuevo_nodo's previous node */
    if (nuevo_nodo->ant != NULL)
        nuevo_nodo->ant->sig = nuevo_nodo;
    /* 8. If the prev of new_node is NULL, it will be
       the new head node */
    else
        (*cab_ref) = nuevo_nodo;
}
 
// This function prints contents of linked list starting
// from the given node
void printList(dlistint_t *nodo)
{
    dlistint_t *ultimo;
    printf("\nTraversal in forward direction \n");
    while (nodo != NULL) {
        printf(" %d ", nodo->info);
        ultimo = nodo;
        nodo = nodo->sig;
    }
 
    printf("\nTraversal in reverse direction \n");
    while (ultimo != NULL) {
        printf(" %d ", ultimo->info);
        ultimo = ultimo->ant;
    }
}
 
/* Driver program to test above functions*/
int main()
{
    /* Start with the empty list */
    dlistint_t* head = NULL;
    insertar(&head, 7);
 
    insertar(&head, 1);
 
    insertar(&head, 4);
 
    // Insert 8, before 1. So linked list becomes
    // 4->8->1->7->NULL
    insertBefore(&head, head->sig, 8);
 
    printf("Created DLL is: ");
    printList(head);
 
    getchar();
    return 0;
}
