template <typename T, typename Container = vector<T>,
          typename Compare = less<typename Container::value_type> >
class priority_queue
{
public:
   /** Default constructor; initializes an empty priority queue.
    *  The default comparison operator is <.
    * @pre None.
    * @post An empty priority queue exists.
    * @param cmp  A comparison function object may be supplied. */
   explicit priority_queue(const Compare& cmp = Compare(),
                           const Container& = Container()) ;

   /** Determines whether the priority queue is empty.
    * @pre None.
    * @post None.
    * @return True if the priority queue is empty, otherwise
    *         returns false. */
   bool empty() const;

   /** Determines the size of the priority queue. The return type
    *  size_type is an integral type.
    * @pre None.
    * @post None.
    * @return The number of items that are currently in the
    *         priority queue. */
   size_type size() const;

   /** Returns a reference to the highest priority element in the
    *  priority queue.
    * @pre None.
    * @post The item remains at the top of the priority queue.
    * @return The highest priority item. */
   const value_type& top() const;

   /** Removes the highest priority element in the priority queue.
    * @pre None.
    * @post The highest priority item has been removed.
    * @return The highest priority item. */
   void pop();

   /** Adds the item e to the priority queue
    * @pre None.
    * @post The priority queue has the highest priority element at
    *       the top. */
   void push(const value_type& e);

}; // end std::priority_queue
