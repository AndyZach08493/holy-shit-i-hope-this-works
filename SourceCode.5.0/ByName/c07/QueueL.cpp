/** @file QueueL.cpp */

#include "QueueL.h"  // header file

Queue::Queue()
{
}  // end default constructor

Queue::Queue(const Queue& Q)
   : aList(Q.aList)
{
}  // end copy constructor

Queue::~Queue()
{
}  // end destructor

bool Queue::isEmpty() const
{
   return (aList.getLength() == 0);
}  // end isEmpty

void Queue::enqueue(const QueueItemType& newItem)
   throw(QueueException)
{
   try
   {
      aList.insert(aList.getLength()+1, newItem);
   }
   catch (ListException e)
   {
      throw QueueException("QueueException: cannot enqueue item");
   }
   catch (ListIndexOutOfRangeException e)
   {
      throw QueueException("QueueException: cannot enqueue item");
   }  // end try
}  // end enqueue

void Queue::dequeue() throw(QueueException)
{
   if (aList.isEmpty())
      throw QueueException(
	 "QueueException: empty queue, cannot dequeue");
   else
      aList.remove(1);
}  // end dequeue

void Queue::dequeue(QueueItemType& queueFront)
   throw(QueueException)
{
   if (aList.isEmpty())
      throw QueueException(
	 "QueueException: empty queue, cannot dequeue");
   else
   {
      aList.retrieve(1, queueFront);
      aList.remove(1);
   }  // end if
}  // end dequeue

void Queue::getFront(QueueItemType& queueFront) const
   throw(QueueException)
{
   if (!aList.isEmpty())
      throw QueueException(
      "QueueException: empty queue, cannot getFront");
   else
      aList.retrieve(1, queueFront);
}  // end getFront
// End of implementation file.
