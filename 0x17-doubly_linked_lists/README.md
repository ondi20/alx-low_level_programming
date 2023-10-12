A doubly linked list is a kind of linked list in which each node has two pointers or references: one to the previous node in the sequence and one to the next node in the series. This enables the traversal of the list in both forward and backward directions.

In a doubly linked list, the first node is connected to a NULL reference in the previous pointer because there is no node before it. And the final node is connected to a NULL reference in the next pointer because there is no node after it. Each node in the list contains a data element as well as two pointers to the previous and next nodes in the sequence.

Doubly linked lists are handy data structures for implementing lists, queues, and stacks, among other data structures. They have various advantages over singly-linked lists, including the ability to traverse the list in both ways, which makes them efficient for some algorithms. Nevertheless, because of the extra pointer in each node, they require more memory than singly-linked lists.

structure:
struct node.
{
struct node *prev;
int data;
struct node *next;
}
