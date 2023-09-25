#ifndef SORT_H_INCLUDED
#define SORT_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

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

/* Printing helper functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Sorting algoritms */
/*-------------Mandatory Tasks---------------------------------*/
void bubble_sort(int *array, size_t size);
void swap_node(listint_t **h, listint_t **n1, listint_t *n2);
void insertion_sort_list(listint_t **list);
void swap_integers(int *m, int *n);
void selection_sort(int *array, size_t size);
int lomuto_partition(int *array, size_t size, int left, int right);
void lomuto_sort(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);
/*-------------Advanced Tasks---------------------------------*/
void node_swap_ahead(listint_t **list, listint_t **tail, listint_t **shaker);
void node_swap_behind(listint_t **list, listint_t **tail, listint_t **shaker);
void cocktail_sort_list(listint_t **list);
int obtain_max(int *array, int size);
void counting_sort(int *array, size_t size);
void merge_splits(int *array, int low, int middle, int high, int *temp);
void merge_sorty(int *array, int low, int high, int *temp);
void merge_sort(int *array, size_t size);
void stupi_fy(int *array, int heap, int i, int size);
void heap_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
int *int_array_init(size_t size);
void counting_sort(int *array, size_t size, int exp);
void radix_sort(int *array, size_t size);
void bitonic_merge(int *array, int low, int count, int dir, size_t size);
void biton_sort(int *array, int low, int count, int dir, size_t size);
void bitonic_sort(int *array, size_t size);






#endif /*  SORT_H_INCLUDED */
