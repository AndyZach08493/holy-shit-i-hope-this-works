bool binary_search(ForIter first, ForIter last, const T& value);
bool binary_search(ForIter first, ForIter last, const T& value,
                   Compare cmp);
// Returns true if value appears in the sorted range
// from first to last.
// Returns false if value is not found.
// A comparison function object may be supplied.

ForIter lower_bound(ForIter first, ForIter last, const T& value);
ForIter lower_bound(ForIter first, ForIter last, const T& value,
                    Compare cmp);
// Returns an iterator pointing to the first occurrence of value
// in the sorted range from first to last.
// Returns last if value is not found.
// A comparison function object may be supplied.

ForIter upper_bound(ForIter first, ForIter last, const T& value);
ForIter upper_bound(ForIter first, ForIter last, const T& value,
                    Compare cmp);
// Returns an iterator pointing to one past the last occurrence
// of value in the sorted range from first to last.
// Returns last if value is not found.
// A comparison function object may be supplied.

pair<ForIter, ForIter> equal_range(ForIter first, ForIter last,
                                   const T& value);
pair<ForIter, ForIter> equal_range(ForIter first, ForIter last,
                                   const T& value, Compare cmp);
// Combines lower_bound and upper_bound to return a pair
// of iterators to the first and one past the last occurrences
// of value.
// Both iterators point to last if value is not found.
// A comparison function object may be supplied.
