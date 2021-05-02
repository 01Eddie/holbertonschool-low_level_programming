# A complete working Python
# program to demonstrate all
# insertion methods
 
# A linked list node
class Node:
 
    # Constructor to create a new node
    def __init__(self, info):
        self.info = info
        self.sig = None
        self.ant = None
 
# Class to create a Doubly Linked List
class DoublyLinkedList:
 
    # Constructor for empty Doubly Linked List
    def __init__(self):
        self.cabecera = None
 
    # Given a reference to the cabecera of a list and an
    # integer, inserts a new node on the front of list
    def push(self, nueva_info):
 
        # 1. Allocates node
        # 2. Put the data in it
        nuevo_nodo = Node(nueva_info)
 
        # 3. Make sig of new node as cabecera and
        # previous as None (already None)
        nuevo_nodo.sig = self.cabecera
 
        # 4. change prev of cabecera node to nuevo_nodo
        if self.cabecera is not None:
            self.cabecera.ant = nuevo_nodo
 
        # 5. move the cabecera to point to the new node
        self.cabecera = nuevo_nodo
 
    # Given a node as ant_nodo, insert a new node after
    # the given node
    def insertarDespues(self, ant_nodo, nueva_info):
 
        # 1. Check if the given ant_nodo is None
        if ant_nodo is None:
            print("the given previous node cannot be NULL")
            return
 
        # 2. allocate new node
        # 3. put in the data
        nuevo_nodo = Node(nueva_info)
 
        # 4. Make net of new node as sig of prev node
        nuevo_nodo.sig = ant_nodo.sig
 
        # 5. Make ant_nodo as previous of nuevo_nodo
        ant_nodo.sig = nuevo_nodo
 
        # 6. Make ant_nodo ass previous of nuevo_nodo
        nuevo_nodo.ant = ant_nodo
 
        # 7. Change previous of nuevo_nodos's sig node
        if nuevo_nodo.sig:
            nuevo_nodo.sig.ant = nuevo_nodo
 
    # Given a reference to the cabecera of DLL and integer,
    # finals a new node at the end
    def final(self, nueva_info):
 
        # 1. Allocates node
        # 2. Put in the data
        nuevo_nodo = Node(nueva_info)
 
        # 3. This new node is going to be the final node,
        # so make sig of it as None
        # (It already is initialized as None)
 
        # 4. If the Linked List is empty, then make the
        # new node as cabecera
        if self.cabecera is None:
            self.cabecera = nuevo_nodo
            return
 
        # 5. Else traverse till the final node
        final = self.cabecera
        while final.sig:
            final = final.sig
 
        # 6. Change the sig of final node
        final.sig = nuevo_nodo
 
        # 7. Make final node as previous of new node
        nuevo_nodo.ant = final
 
        return
 
    # This function prints contents of linked list
    # starting from the given node
    def printList(self, node):
 
        print("\nTraversal in forward direction")
        while node:
            print(" %d" % (node.info)),
            final = node
            node = node.sig
 
        print("\nTraversal in reverse direction")
        while final:
            print(" %d" % (final.info)),
            final = final.ant
 
# Driver program to test above functions
 
 
# Start with empty list
llist = DoublyLinkedList()
 
# Insert 6. So the list becomes 6->None
llist.final(6)
 
# Insert 7 at the beginning.
# So linked list becomes 7->6->None
llist.push(7)
 
# Insert 1 at the beginning.
# So linked list becomes 1->7->6->None
llist.push(1)
 
# Insert 4 at the end.
# So linked list becomes 1->7->6->4->None
llist.final(4)
 
# Insert 8, after 7.
# So linked list becomes 1->7->8->6->4->None
llist.insertarDespues(llist.cabecera.sig, 8)
 
print("Created DLL is: "),
llist.printList(llist.cabecera)