/** @file PQ.cpp
 * ADT priority queue.
 * A heap represents the priority queue. */

#include "PQ.h"    // header file for priority queue

bool PriorityQueue::pqIsEmpty() const
{
   return h.heapIsEmpty();
}  // end pqIsEmpty

void PriorityQueue::pqInsert(const PQueueItemType& newItem)
   throw(PQueueException)
{
   try
   {
      h.heapInsert(newItem);
   }  // end try
   catch (HeapException e)
   {  throw PQueueException("PQueueException: Priority queue full");
   }  // end catch
}  // end pqInsert

void PriorityQueue::pqDelete(PQueueItemType& priorityItem)
   throw(PQueueException)
{
   try
   {
      h.heapDelete(priorityItem);
   }  // end try
   catch (HeapException e)
   {  throw PQueueException("PQueueException: Priority queue empty");
   }  // end catch
}  // end pqDelete
// End of implementation file.
