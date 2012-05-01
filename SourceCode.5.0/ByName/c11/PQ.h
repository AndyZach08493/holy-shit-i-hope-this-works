/** @file PQ.h */

#include "PQueueException.h"
#include "Heap.h"  // ADT heap operations

typedef HeapItemType PQueueItemType;

/** @class PriorityQueue
 * ADT priority queue - Heap implementation. */
class PriorityQueue
{
public:
   // default constructor and copy constructor
   // are supplied by the compiler
   virtual ~PriorityQueue() {}

// priority-queue operations:
   virtual bool pqIsEmpty() const;
   virtual void pqInsert(const PQueueItemType& newItem)
      throw(PQueueException);
   virtual void pqDelete(PQueueItemType& priorityItem)
      throw(PQueueException);

private:
   Heap h;
}; // end PriorityQueue
// End of header file.
