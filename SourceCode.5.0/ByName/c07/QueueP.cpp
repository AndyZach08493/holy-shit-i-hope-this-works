/** @file QueueP.cpp */

#include <cstddef>   // for NULL
#include <cassert>   // for assert
#include <new>       // for bad_alloc
#include "QueueP.h"  // header file

using namespace std;

Queue::Queue() : backPtr(NULL), frontPtr(NULL)
{
}  // end default constructor

Queue::Queue(const Queue& Q)
{  // Implementation left as an exercise (Exercise 6).
}  // end copy constructor

Queue::~Queue()
{
   while (!isEmpty())
      dequeue();
   assert ( (backPtr == NULL) && (frontPtr == NULL) );
}  // end destructor

bool Queue::isEmpty() const
{
   return backPtr == NULL;
}  // end isEmpty

void Queue::enqueue(const QueueItemType& newItem)
   throw(QueueException)
{
   try
   {  // create a new node
      QueueNode *newPtr = new QueueNode;

      // set data portion of new node
      newPtr->item = newItem;

      newPtr->next = NULL;

      // insert the new node
      if (isEmpty())
	 // insertion into empty queue
	 frontPtr = newPtr;
      else
	 // insertion into nonempty queue
	 backPtr->next = newPtr;

      backPtr = newPtr;  // new node is at back
   }
   catch (bad_alloc e)
   {
      throw QueueException(
	 "QueueException: enqueue cannot allocate memory.");
   }  // end try
}  // end enqueue

void Queue::dequeue() throw(QueueException)
{
   if (isEmpty())
      throw QueueException(
	 "QueueException: empty queue, cannot dequeue");
   else
   {  // queue is not empty; remove front
      QueueNode *tempPtr = frontPtr;
      if (frontPtr == backPtr)   // special case?
      {  // yes, one node in queue
         frontPtr = NULL;
         backPtr = NULL;
      }
      else
         frontPtr = frontPtr->next;

      tempPtr->next = NULL;  // defensive strategy
      delete tempPtr;
   }  // end if
}  // end dequeue

void Queue::dequeue(QueueItemType& queueFront)
   throw(QueueException)
{
   if (isEmpty())
      throw QueueException(
	 "QueueException: empty queue, cannot dequeue");
   else
   {  // queue is not empty; retrieve front
      queueFront = frontPtr->item;
      dequeue();  // delete front
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
      queueFront = frontPtr->item;
}  // end getFront
// End of implementation file.
