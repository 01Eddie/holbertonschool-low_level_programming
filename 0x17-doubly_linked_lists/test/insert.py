# A complete working Python program to demonstrate all
# insertion before a given node
# A linked list node
class Node:
    def __init__(self, x):
        self.dato = x
        self.ant = None
        self.sig = None
 
# /* Given a reference (pointer to pointer)
# to the head of a list
# and an int, inserts a new node on
# the front of the list. */
def insertar(cab_ref, nuevo_dato):
    # /* 1. allocate node */
    nuevo_nodo = Node(nuevo_dato)
    # /* 2. put in the data */
    nuevo_nodo.dato = nuevo_dato
    # /* 3. Make next of new node as
    # head and previous as None */
    nuevo_nodo.sig = cab_ref
    nuevo_nodo.ant = None
    # /* 4. change prev of head node to new node */
    if (cab_ref != None):
        cab_ref.ant = nuevo_nodo
    # /* 5. move the head to point to the new node */
    cab_ref = nuevo_nodo
    return cab_ref
# /* Given a node as next_node, insert
# a new node before the given node */
 
def insertBefore(cab_ref, sig_nodo, nuevo_dato):
    # /*1. check if the given sig_nodo is NULL */
    if (sig_nodo == None):
        print("the given next node cannot be NULL")
        return
    # /* 3. put in the data */
    nuevo_nodo = Node(nuevo_dato)
    # /* 4. Make prev of new node as prev of next_node */
    nuevo_nodo.ant = sig_nodo.ant
    # /* 5. Make the prev of next_node as new_node */
    sig_nodo.ant = nuevo_nodo
    # /* 6. Make next_node as next of new_node */
    nuevo_nodo.sig = sig_nodo
    # /* 7. Change next of new_node's previous node */
    if (nuevo_nodo.ant != None):
        nuevo_nodo.ant.sig = nuevo_nodo
    # /* 8. If the ant of new_node is NULL, it will be
    #   the new head node */
    else:
        cab_ref = nuevo_nodo
    return cab_ref
# This function prints contents of linked
# list starting from the given node
def printList(nodo):
    ultimo = None
    print("Traversal in forward direction ")
    while (nodo != None):
        print(nodo.dato, end=" ")
        ultimo = nodo
        nodo = nodo.sig
 
    print("\nTraversal in reverse direction ")
    while (ultimo != None):
        print(ultimo.dato, end=" ")
        ultimo = ultimo.ant
 
# /* Driver program to test above functions*/
if __name__ == '__main__':
    # /* Start with the empty list */
    head = None
    head = insertar(head, 7)
    head = insertar(head, 1)
    head = insertar(head, 4)
 
    # Insert 8, before 1. So linked list becomes 4.8.1.7.NULL
    head = insertBefore(head, head.sig, 8)
    print("Created DLL is: ")
    printList(head)
