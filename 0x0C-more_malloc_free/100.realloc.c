#include	"main.h"
#include	<stdlib.h>

/**
 * _realloc	-	reallocate	a	memory	in	the	heap
 * @ptr:	pointer	to	the	old	memory	allocated	by	malloc
 * @old_size:	old	s-ze	allocated	by	malloc	in	the	heap
 * @new_size:	new	size	allocated	by	the	_realloc	function
 * Return:	pointer	to	the	newly	allocated	memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
