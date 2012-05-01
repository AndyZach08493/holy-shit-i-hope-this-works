template <typename T> class std::list
{
public:
   /** Default constructor; initializes an empty list.
    * @pre None.
    * @post An empty list exists. */
   list();

   /** Constructor; initializes list to have num elements with the
    *  value val.
    * @pre None.
    * @post A list with num elements.
    * @param num Number of elements needed.
    * @param val  Value to initialize all list items to. */
   list(size_type num, const T& val = T());

   /** Copy constructor; initializes list to have the same elements
    *  as list anotherList.
    * @pre None.
    * @post A list with the same elements as anotherList.
    * @param anotherList  The list to copy. */
   list(const list<T> & anotherList);

   /** Determines whether a list is empty.
    * @pre None.
    * @post None.
    * @return True if the list is empty; otherwise returns
    *         false. */
   bool empty() const;

   /** Determines the length of the list. size_type is an integral
    *  type.
    * @pre None.
    * @post None.
    * @return The number of items that are currently in the
    *         list. */
   size_type size() const;

   /** Determines the maximum number of items the list can hold.
    * @pre None.
    * @post None.
    * @return The maximum number of items. */
   size_type max_size();

   /** Inserts an item val into the list immediately before the
    *  element specified by the iterator i.
    * @pre The iterator must be initialized, even if the list is
    *      empty.
    * @post Item val is inserted into the list.
    * @param i  An iterator refering to the place to insert.
    * @param val  Item to insert.
    * @return An iterator to the newly inserted item. */
   iterator insert(iterator i, const T& val = T());

   /** Removes all items with value val from the list.
    * @pre None.
    * @post The list has no item with value val.
    * @param val  Value to remove from the list. */
   void remove(const T& val);

   /** Removes the item in the list pointed to by iterator i.
    * @pre The iterator must be initialized to point to an element
    *      in the list.
    * @post The list item pointed to by i is no longer in the list.
    * @return An iterator to the item following the removed
    *         item. If the item removed is the last item in the
    *         list, the iterator value will be the  same as the
    *         value returned by end(). */
   iterator erase(iterator i);

   /** Returns an iterator to the first item in the list.
    * @pre None.
    * @post None.
    * @return If the list is empty, the iterator value returned
    *         will be the same as the value returned by end(). */
   iterator begin();

   /** Returns an iterator value that can be used to test whether
    *  the end of the list has been reached.
    * @pre None.
    * @post None.
    * @return The iterator value indicating the end of the list. */
   iterator end();

   /** Sorts elements according to the operator < and maintains the
    *  relative order of equal elements.
    * @pre None.
    * @post The list is sorted in ascending order. */
   void sort();

}; // end std::list
