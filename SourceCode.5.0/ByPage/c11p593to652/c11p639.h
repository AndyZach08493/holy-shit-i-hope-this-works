OutputIter set_union(InputIter1 first, InputIter1 last,
                     InputIter2 first2, InputIter2 last2,
                     OutputIter result);
// Returns a set that is a union of two sets.
// Precondition: None.
// Postcondition: A set s3 contains the union of sets s1 and s2.

OutputIter set_difference(InputIter1 first, InputIter1 last,
                          InputIter2 first2, InputIter2 last2,
                          OutputIter result);
// Returns a set that has elements that belong to the
// first set, but not the second.
// Precondition:  None.
// Postcondition: A set s3 contains the difference of sets s1 and s2.

OutputIter set_intersection(InputIter1 first, InputIter1 last,
                            InputIter2 first2, InputIter2 last2,
                            OutputIter result);
// Returns a set that has elements that belong to both
// input sets.
// Precondition: None.
// Postcondition: A set s3 contains the intersection of sets s1 and s2.

bool includes(InputIter1 first, InputIter1 last,
              InputIter2 first2, InputIter2 last2);
// Tests whether set2 is a subset of set1.
// Precondition: None
// Postcondition: Returns true if s2 is a subset of s1; otherwise
// returns false
