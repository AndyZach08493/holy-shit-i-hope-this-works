/** @file QueueL.h */

#include "ListP.h"  //  ADT list operations
#include "QueueException.h"
typedef ListItemType QueueItemType;

/** @class Queue
 * ADT queue - ADT list implementation. */
class Queue
{
public:
// constructors and destructor:

   /** Default constructor. */
   Queue();

   /** Copy constructor.
    * @param Q  The Queue to copy. */
   Queue(const Queue& Q);

   /** Destructor. */
   ~Queue();

// Queue operations:
   bool isEmpty() const;
   void enqueue(const QueueItemType& newItem)
      throw(QueueException);
   void dequeue() throw(QueueException);
   void dequeue(QueueItemType& queueFront)
      throw(QueueException);
   void getFront(QueueItemType& queueFront) const
      throw(QueueException);

private:
   List aList;  // list of queue items
}; // end Queue
// End of header file.
