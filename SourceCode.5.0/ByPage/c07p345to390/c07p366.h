template <typename T, typename Container = deque <T> >
class queue
{
public:
   /** Default constructor, initializes an empty queue.
    * @pre None.
    * @post An empty queue exists. */
   explicit queue(const Container& cnt = Container());

   /** Determines if the queue is empty.
    * @pre None.
    * @post None.
    * @return True if the queue is empty, otherwise returns
    *         false. */
   bool empty() const;

   /** Determines the size of the queue. size_type is an integral
    *  type.
    * @pre None.
    * @post None.
    * @return The number of items that are currently in the
    *         queue. */
   size_type size() const;

   /** Returns a reference to the first item in the queue.
    * @pre None.
    * @post The item is not removed from the queue.
    * @return A reference to the first item in the queue. */
   T &front();

   /** Returns a reference to the last item in the queue.
    * @pre None.
    * @post The item is not removed from the queue.
    * @return A reference to the last item in the queue. */
   T &back();

   /** Removes the first item in the queue.
    * @pre None.
    * @post The item at the front of the queue is removed. */
   void pop();

   /** Inserts an item at the back of the queue.
    * @pre None.
    * @post The item x is at the back of the queue.
    * @param x The item to push. */
   void push(const T& x);

}; // end std::queue
