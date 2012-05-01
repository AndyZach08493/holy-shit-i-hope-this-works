template <typename T, typename Container = deque <T> >
class stack
{
public:
   /** Default constructor; initializes an empty stack.
    * @pre None.
    * @post An empty stack exists. */
   explicit stack(const Container& cnt = Container());

   /** Determines whether this stack is empty.
    * @pre None.
    * @post None.
    * @return True if this stack is empty, otherwise returns
    *         false. */
   bool empty() const;

   /** Determines the size of this stack. The return type size_type
    *  is an integral type.
    * @pre None.
    * @post None.
    * @return The number of items that are currently on this
    *         stack. */
   size_type size() const;

   /** Returns a reference to the top of this stack.
    * @pre None.
    * @post The item remains on this stack. */
   T &top();

   /** Removes the top item in this stack.
    * @pre None.
    * @post The item most recently added is removed from this
    *       stack. */
   void pop();

   /** Adds an item to the top of this stack.
    * @pre None.
    * @post Item x is on top of this stack.
    * @param x  The given item. */
   void push(const T& x);

}; // end std::stack
