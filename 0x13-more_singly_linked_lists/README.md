0. Print list

File: 0-print_listint.c
Description:Write a function that prints all the elements of a listint_t list.

Prototype: size_t print_listint(const listint_t *h);
Return: the number of nodes

1. List length

File: 1-listint_len.c
Description: C function that returns the number of elements in a listint_t linked list.
2. Add node

File: 2-add_nodeint.c
Description: C function that adds a new node at the beginning of a listint_t linked list. If the function fails, it returns NULL; otherwise, it returns the address of the new element.
3. Add node at the end

File: 3-add_nodeint_end.c
Description: C function that adds a new node at the end of a listint_t linked list. If the function fails, it returns NULL; otherwise, it returns the address of the new element.
4. Free list

File: 4-free_listint.c
Description: C function that frees a listint_t linked list.
5. Free

File: 5-free_listint2.c
Description: C function that frees a listint_t linked list and sets the head to NULL.
6. Pop

File: 6-pop_listint.c
Description: C function that deletes the head node of a listint_t linked list. If the linked list is empty, it returns 0; otherwise, it returns the head node's data (n).
7. Get node at index

File: 7-get_nodeint.c
Description: C function that locates a given node of a listint_t linked list. If the node does not exist, it returns NULL; otherwise, it returns the located node.
8. Sum list

File: 8-sum_listint.c
Description: C function that returns the sum of all the data (n) of a listint_t linked list. If the linked list is empty, it returns 0; otherwise, it returns the sum of all the data (n).
9. Insert

File: 9-insert_nodeint.c
Description: C function that inserts a new node into a listint_t linked list at a given position. If it is not possible to add the new node at index idx or the function fails, it returns NULL; otherwise, it returns the address of the new node.
10. Delete at index

File: 10-delete_nodeint.c
Description: C function that deletes the node at a given index of a listint_t linked list. If the function succeeds, it returns 1; if it fails, it returns -1.
11. Reverse list

File: 100-reverse_listint.c
Description: C function that reverses a listint_t linked list using a maximum of one loop and two variables. It returns a pointer to the first node of the reversed list.
12. Print (safe version)

File: 101-print_listint_safe.c
Description: C function that prints a listint_t linked list safely (i.e., can free lists containing loops). It returns the number of nodes in the listint_t list.
13. Free (safe version)

File: 102-free_listint_safe.c
Description: C function that frees a listint_t linked list safely (i.e., can free lists containing loops). It returns the size of the list that was freed and sets the head to NULL.
14. Find the loop

File: 103-find_loop.c
Description: C function that finds the loop contained in a listint_t linked list using a maximum of two variables. If no loop is found, it returns NULL; otherwise, it returns the address of the node where the loop starts.
