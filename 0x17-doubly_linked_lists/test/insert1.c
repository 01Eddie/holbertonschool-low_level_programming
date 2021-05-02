#include <stdio.h>
#include <stdlib.h>
 
// A linked list node
typedef struct Node {
    int info;
    struct Node* sig;
    struct Node* ant;
}dlistint_t;
 
/* Given a reference (pointer to pointer) to the head of a
   list and an int, inserts a new node on the front of the
   list. */
void push(dlistint_t** cab_ref, int nueva_info)
{
    /* 1. allocate node */
    dlistint_t* nuevo_nodo
        = (dlistint_t*)malloc(sizeof(dlistint_t));
 
    /* 2. put in the info  */
    nuevo_nodo->info = nueva_info; 

    /* 3. Make next of new node as head and previous as NULL
     */
    nuevo_nodo->sig = (*cab_ref);
    nuevo_nodo->ant = NULL;
 
    /* 4. change prev of head node to new node */
    if ((*cab_ref) != NULL)
        (*cab_ref)->ant = nuevo_nodo;
 
    /* 5. move the head to point to the new node */
    (*cab_ref) = nuevo_nodo;
}
 
/* Given a node as sig_nodo, insert a new node after the
 * given node */
void insertarDespues(dlistint_t* sig_nodo, int nueva_info)
{
    /*1. check if the given sig_nodo is NULL */
    if (sig_nodo == NULL) {
        printf("the given previous node cannot be NULL");
        return;
    }
 
    /* 2. allocate new node */
    dlistint_t* nuevo_nodo
        = (dlistint_t*)malloc(sizeof(dlistint_t));
 
    /* 3. put in the info  */
    nuevo_nodo->info = nueva_info;
 
    /* 4. Make next of new node as next of sig_nodo */
    nuevo_nodo->sig = sig_nodo->sig;
 
    /* 5. Make the sig of sig_nodo as nuevo_nodo */
    sig_nodo->sig = nuevo_nodo;
 
    /* 6. Make sig_nodo as previous of nuevo_nodo */
    nuevo_nodo->ant = sig_nodo;
 
    /* 7. Change previous of nuevo_nodo's sig node */
    if (nuevo_nodo->sig != NULL)
        nuevo_nodo->sig->ant = nuevo_nodo;
}
 
/* Given a reference (pointer to pointer) to the head
   of a DLL and an int, finals a new node at the end  */
void final(dlistint_t** cab_ref, int nueva_info)
{
    /* 1. allocate node */
    dlistint_t* nuevo_nodo = (dlistint_t*)malloc(sizeof(dlistint_t));
 
    dlistint_t* ultimo = *cab_ref; /* used in step 5*/
 
    /* 2. put in the info  */
    nuevo_nodo->info = nueva_info;
 
    /* 3. This new node is going to be the ultimo node, so
          make sig of it as NULL*/
    nuevo_nodo->sig = NULL;
 
    /* 4. If the Linked List is empty, then make the new
          node as head */
    if (*cab_ref == NULL) {
        nuevo_nodo->ant = NULL;
        *cab_ref = nuevo_nodo;
        return;
    }
 
    /* 5. Else traverse till the ultimo node */
    while (ultimo->sig != NULL)
        ultimo = ultimo->sig;
 
    /* 6. Change the sig of ultimo node */
    ultimo->sig = nuevo_nodo;
 
    /* 7. Make ultimo node as previous of new node */
    nuevo_nodo->ant = ultimo;
 
    return;
}
 
// This function prints contents of linked list starting
// from the given node
void printList(dlistint_t* nodo)
{
    dlistint_t* ultimo;
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
 
    // Insert 6.  So linked list becomes 6->NULL
    final(&head, 6);
 
    // Insert 7 at the beginning. So linked list becomes
    // 7->6->NULL
    push(&head, 7);
 
    // Insert 1 at the beginning. So linked list becomes
    // 1->7->6->NULL
    push(&head, 1);
 
    // Insert 4 at the end. So linked list becomes
    // 1->7->6->4->NULL
    final(&head, 4);
 
    // Insert 8, after 7. So linked list becomes
    // 1->7->8->6->4->NULL
    insertarDespues(head->sig, 8);
 
    printf("Created DLL is: ");
    printList(head);
 
    getchar();
    return 0;
}