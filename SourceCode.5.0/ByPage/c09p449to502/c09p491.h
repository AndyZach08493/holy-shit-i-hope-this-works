void sort(RandomIter first, RandomIter last);
void sort(RandomIter first, RandomIter last, Compare cmp);
// Sorts first to last into ascending order by default.
// A comparison function object may be supplied.

void stable_sort(RandomIter first, RandomIter last);
void stable_sort(RandomIter first, RandomIter last,
		 Compare cmp);
// Sorts first to last into ascending order by default.
// A comparison function object may be supplied.
// Preserves original ordering of equivalent elements.

void partial_sort(RandomIter first, RandomIter middle,
                  RandomIter last);
void partial_sort(RandomIter first, RandomIter middle,
                  RandomIter last, Compare cmp);
// Sorts the number of elements from first to last
// and places them in the range from first to middle.
// Elements from middle to last are not ordered.
// Default sort is in ascending order.
// A comparison function object may be supplied.
RandomIter partial_sort_copy(InputIter first, InputIter last,
			     RandomIter first2, RandomIter last2);
RandomIter partial_sort_copy(InputIter first, InputIter last,
			     RandomIter first2, RandomIter last2,
			     Compare cmp);
// Sorts the number of elements from first to last
// and copies them into a container in the range
// from first2 to last2.
// Default sort is in ascending order.
// A comparison function object may be supplied.

void nth_element(RandomIter first, RandomIter nth,
                 RandomIter, last);
void nth_element(RandomIter first, RandomIter nth,
                 RandomIter last, Compare cmp);
// The nth element becomes a dividing point for the container.
// The ranges from first to nth and nth to last are not sorted.
// All elements from first to nth are less than or equal to nth.
// All elements from nth to last are greater than nth.
// A comparison function object may be supplied.

BiIter partition(BiIter first, BiIter last,
                 Predicate p);
// The container is partitioned to place all elements that
// satisfy a particular predicate p before every element that
// does not satisfy the predicate p.
// The two ranges are not sorted.
// The return iterator points to either the first element that
// does not satisfy the predicate p or the end.
// Relative order of equivalent elements is not maintained.

BiIter stable_partition(BiIter first, BiIter last,
                        Predicate p);
// The container is partitioned to place all elements that
// satisfy a particular predicate p before every element that
// does not satisfy the predicate p.
// The two ranges are not sorted.
// The return iterator points to either the first element that
// does not satisfy the predicate p or the end.
// Relative order of equivalent elements is maintained.

OutputIter merge(InputIter first, InputIter last,
                 InputIter2 first2, InputIter2 last2,
                 OutIter res);
OutputIter merge(InputIter first, InputIter last,
                 InputIter2 first2, InputIter2 last2,
                 OutputIter res, Compare cmp);
// Takes two sorted ranges and
// merges them into another sorted container.
// A comparison function object may be supplied.
// For equivalent elements, elements from the first range will
// precede elements from the second.

void inplace_merge(BiIter  first, BiIter middle, BiIter last);
void inplace_merge(BiIter  first, BiIter middle, BiIter last,
                   Compare cmp);
// Takes two parts of a sorted container
// and merges them in place.
// The two ranges are first to middle and middle to last.
// A comparison function object may be supplied.
// For equivalent elements, elements from the first range will
// precede elements from the second.
