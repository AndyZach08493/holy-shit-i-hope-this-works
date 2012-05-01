/** @file QueueA.cpp
 * Circular array-based implementation.
 * The array has indexes to the front and back of the
 * queue. A counter tracks the number of items currently
 * in the queue. */

#include "QueueA.h"  // header file

Queue::Queue() : front(0), back(MAX_QUEUE-1), count(0)
{
}  // end default constructor

bool Queue::isEmpty() const
{
   return count == 0;
}  // end isEmpty

void Queue::enqueue(const QueueItemType& newItem)
   throw(QueueException)
{
   if (count == MAX_QUEUE)
      throw QueueException(
	 "QueueException: queue full on enqueue");
   else
   {  // queue is not full; insert item
      back = (back+1) % MAX_QUEUE;
      items[back] = newItem;
      ++count;
   }  // end if
}  // end enqueue

void Queue::dequeue() throw(QueueException)
{
   if (isEmpty())
      throw QueueException(
	 "QueueException: empty queue, cannot dequeue");
   else
   {  // queue is not empty; remove front
      front = (front+1) % MAX_QUEUE;
      --count;
   }  // end if
}  // end dequeue

void Queue::dequeue(QueueItemType& queueFront)
   throw(QueueException)
{
   if (isEmpty())
      throw QueueException(
	 "QueueException: empty queue, cannot dequeue");
   else
   {  // queue is not empty; retrieve and remove front
      queueFront = items[front];
      front = (front+1) % MAX_QUEUE;
      --count;
   }  // end if
}  // end dequeue

void Queue::getFront(QueueItemType& queueFront) const
   throw(QueueException)
{
   if (isEmpty())
      throw QueueException(
	 "QueueException: empty queue, cannot getFront");
   else
      // queue is not empty; retrieve front
      queueFront = items[front];
}  // end getFront
// End of implementation file.
