void push_heap(RandomIter first, RandomIter last);
void push_heap(RandomIter first, RandomIter last, Compare cmp);
// Push an item onto the heap.
// The value pushed is *(last-1).
// A comparison function object may be supplied.

void pop_heap(RandomIter first, RandomIter last);
void pop_heap(RandomIter first, RandomIter last, Compare cmp);
// Push an item onto the heap.
// Swaps first element with *(last-1) and makes [first, last-1]
// into a heap.
// A comparison function object may be supplied.

void make_heap(RandomIter first, RandomIter last);
void make_heap(RandomIter first, RandomIter last, Compare cmp);
// Turns an existing container into a heap.
// A comparison function object may be supplied.

void sort_heap(RandomIter first, RandomIter last);
void sort_heap(RandomIter first, RandomIter last, Compare cmp);
// Turns the heap back into the original container.
// A comparison function object may be supplied.
