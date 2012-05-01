/** @file QueueP.h */

#include "QueueException.h"
typedef desired-type-of-queue-item QueueItemType;

/** @class Queue
 * ADT queue - Pointer-based implementation. */
class Queue
{
public:
// Constructors and destructor:

   /** Default constructor. */
   Queue();

 /** Copy constructor.
  * @param Q The Queue to copy. */
   Queue(const Queue& Q);

   /** Destructor.          */
   ~Queue();

// Queue operations:

   /** Determines whether this queue is empty.
    * @pre None.
    * @post None.
    * @return True if this queue is empty; otherwise returns
    *         false. */
   bool isEmpty() const;

   /** Inserts an item at the back of this queue.
    * @pre newItem is the item to be inserted.
    * @post If the insertion is successful, newItem is at the back
    *       of this queue.
    * @throw QueueException  If memory allocation fails. */
   void enqueue(const QueueItemType& newItem)
        throw(QueueException);

   /** Dequeues the front of this queue.
    * @pre None.
    * @post If this queue is not empty, the item that was added to
    *       this queue earliest is deleted.
    * @throw QueueException  If this queue is empty. */
   void dequeue() throw(QueueException);

   /** Retrieves and deletes the front of this queue.
    * @pre None.
    * @post If this queue is not empty, queueFront contains the item
    *       that was added to this queue earliest, and the item is
    *       deleted.
    * @throw QueueException  If this queue is empty. */
   void dequeue(QueueItemType& queueFront) throw(QueueException);

   /** Retrieves the item at the front of this queue.
    * @pre None.
    * @post If this queue is not empty, queueFront contains the item
    *       that was added to this queue earliest.
    * @throw QueueException  If this queue is empty. */
   void getFront(QueueItemType& queueFront) const
      throw(QueueException);

private:
   /** The queue is implemented as a linked list with one external
    *  pointer to the front of the queue and a second external
    *  pointer to the back of the queue. */
   struct QueueNode
   {  QueueItemType  item;
      QueueNode     *next;
   }; // end QueueNode
   QueueNode *backPtr;
   QueueNode *frontPtr;
}; // end Queue
// End of header file.
