template <typename Key, typename T, typename Compare = less<Key> >
class map
{
public:
   /** Default constructor
    * @pre  The default comparison operator is <.
    * @post The map object is initialized to be empty.
    * @param cmp  A comparison function object. */
   explicit map(const Compare& cmp = Compare());

   /** Constructor: map is initialized with length last - first and
    *  filled with all values from the dereferenced input iterators
    *  on the range [first, last].
    * @pre None.
    * @post The map contains input iterators in the range [first,
    *       last].
    * @param comp  A comparison function object. */
   template <typename InputIter>
   map(InputIter first, InputIter last,
       const Compare& comp = Compare());

   /** Determines whether the map is empty.
    * @pre None.
    * @post None.
    * @returns True if the map is empty, otherwise returns
    *          false. */
   bool empty() const;

   /** Determines the size of the map. The return type size_type is
    *  an integral type.
    * @pre None.
    * @post None.
    * @return The number of items that are currently in the map. */
   size_type size() const;

   /** Determines the maximum number of elements the map can hold.
    * @pre None.
    * @post None.
    * @return The maximum number of elements. */
   size_type max_size() const;

   /** Inserts element pair e into the map if a value_type with the
    *  same key is not already present in the map. Takes an
    *  optional iterator parameter as a hint as to where to
    *  insert.
    * @pre The iterator is initialized.
    * @post Element e has been inserted into the map.
    * @return An iterator to e. */
   Iter insert(Iter i, const value_type& e);

   /** Removes the map element pointed to by iterator i.
    * @pre None.
    * @post None.
    * @return An iterator pointing to the map element following the
    *         removed pair. If the pair was the last element, the
    *         value returned by end() is returned. */
   Iter erase(Iter i)

  /** Removes all map elements in the range (first, last).
    * @pre None.
    * @post The map has no elements in the range [first, last]. */
   void erase(Iter first, Iter last);

   /** Returns an iterator that points to the element equal to e.
    * @pre None.
    * @post None.
    * @return If element e was in the map, an iterator that points
    *         to e is returned; otherwise, the value returned by
    *         end() is returned. */
   Iter find(const key_value& e) const;

   /** Returns number of elements equal to k.
    * @pre None.
    * @post None.
    * @return The number of elements equal to k. Since a map has
    *         unique keys, count will always return 1 or 0. */
   size_type count(const key_type& k);

   /** Returns an iterator that points to the first key that is
    *  equal to or greater than k.
    * @pre None.
    * @post None.
    * @return The comparison function object for the set. */
   Iter lower_bound(const key_type& k) const;

   /** Returns an iterator that points to the first key that is
    *  greater than e.
    * @pre None.
    * @post None.
    * @return The comparison function object for the set. */
   Iter upper_bound(const key_type& k) const;

   /** Exchanges maps.
    * @pre None.
    * @post Exchanges the contents of the map m with the current
    *       map, *this. */
   void swap(map<Key, T, Compare>& m);

  /** Returns an iterator to the first element in the map.
    * @pre None.
    * @post None.
    * @return If the map was empty, the value returned by end() is
    *         returned. */
   Iter begin();

   /** Returns an iterator to test for the end of the map.
    * @pre None.
    * @post None.
    * @return The value for the end of the map is returned. */
   Iter end();

}; // end std::map
