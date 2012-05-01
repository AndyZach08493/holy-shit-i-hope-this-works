template <typename T> class std::vector
{
public:
   /** Default constructor
    * @pre None.
    * @post An empty vector exists. */
   vector()

   /** Creates a vector with n elements
    * @pre None.
    * @post A vector of n elements exists.
    * @param n The number of elements this vector should have. */
   vector(size_type n)

   /** Determines whether the vector is empty.
    * @pre None.
    * @post None.
    * @return True if the vector is empty, otherwise returns
    *         false. */
   bool empty() const;

   /** Determines the length of the vector. The return type
    *  size_type is an integral type.
    * @pre None.
    * @post None.
    * @return The number of items that are currently in the
    *         vector. */
   size_type size() const;

   /** Inserts a new element at the end of the vector.
    * @pre None.
    * @post The new element is the last element in the vector.
    * @param val  The item to append onto the vector. */
   void push_back(const T& val);

   /** Removes the last element of the vector.
    * @pre There is at least one element in the vector.
    * @post The last element of the vector is removed. */
   void pop_back();

   /** Inserts an item val into the vector before the element
    *  specified by the iterator i.
    * @pre The iterator is initialized.
    * @post Item val is inserted into the vector just before i.
    * @return An iterator to the newly inserted item. */
   iterator insert(iterator i, const T& val);

   /** Removes element at i.
    * @pre The iterator must be initialized.
    * @post The element i pointed to is no longer in the vector.
    * @return An iterator to the item following the removed
    *         item. */
   iterator erase(iterator i);

   /** Erases all the elements in the vector.
    * @pre None.
    * @post The vector has no elements. */
   void clear();

   /** Returns an iterator to the first element in the vector.
    * @pre None.
    * @post None.
    * @return If the vector is empty, the value returned by end()
    *         is returned. */
   iterator begin();

   /** Returns an iterator to test for the end of the vector.
    * @pre None.
    * @post None.
    * @return The value for the end of the vector was returned. */
   iterator end();

}; // end std::vector
