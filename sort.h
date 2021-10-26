#ifndef SORT_H
#define SORT_H

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;


/* helpers to print and list arrays and list respectively */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* algo helpers */
void swap(int *x, int *y);

/* sorting algos */
void bubble_sort(int *array, size_t n);

#endif /* SORT_H */