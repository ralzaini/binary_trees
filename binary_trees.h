#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <stddef.h>

/**
* struct binary_tree_s - Binary tree node
*
* @n: Integer stored in the node
* @parent: Pointer to the parent node
* @left: Pointer to the left child node
* @right: Pointer to the right child node
*/

struct binary_tree_s
{
	int n;

	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;
/* Binary Search Tree */
typedef struct binary_tree_s bst_t;
/* AVL Tree */
typedef struct binary_tree_s avl_t;
/* Max Binary Heap */
typedef struct binary_tree_s heap_t;
/**
* struct queue_node - for storing nodes in a queue
*
* @node: the node being stored
* @next: pointer to the next node in the queue
*/
typedef struct queue_node
{
	binary_tree_t *node;
	struct queue_node *next;
} queue_node_t;

/**
* struct queue - struct datastrucutre for queue
*
* @front: pointer to the front of the queue
* @rear: pointer to the rear of the queue
*/
typedef struct queue
{
	queue_node_t *front;
	queue_node_t *rear;
} queue_t;

void binary_tree_print(const binary_tree_t *);
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
#endif