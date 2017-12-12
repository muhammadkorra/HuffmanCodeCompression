#include <stdlib.h>
#include <string.h>
#include "heap.h"

#define heap_parent(pos) ((int) (((pos)- 1) / 2))
#define heap_left (pos) (((pos) * 2) + 1)
#define heap_right(pos) (((pos) * 2) + 2)

void heap_init (Heap *heap, int (*compare)(void *key1, void *key2),
	void (*destroy) (void *data)) {

	heap->size = 0;
	heap->compare = compare;
	heap->destroy = destroy;
	heap->tree = NULL;

	return;
}