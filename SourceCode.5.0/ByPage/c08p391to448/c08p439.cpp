#include <cstddef>
#include <new>     // for bad_alloc
#include "ListI.h"

using namespace std;

ListIterator List:: begin() const
{
   return ListIterator(this, head);
}  // end begin

ListIterator List::end() const
{
   return ListIterator(this, NULL);
}  // end end

ListIterator List::insert(ListIterator iter,
                          const ListItemType& newItem)
   throw(ListException)
{  // Make sure iterator references this list
   if (iter.container == this)
   {  // create new node and place NewItem in it
      try
      {  ListNode *newPtr = new ListNode(newItem, NULL);
	 ++size;
	 // attach new node to list
	 if (iter == begin())
	 {  // insert new node at beginning of list
	    newPtr->next = head;
	    head = newPtr;
	 }
	 else
	 {  ListNode *prev = findPrev(iter);
            // insert new node before node
            // to which iter references
            newPtr->next = prev->next;
	    prev->next = newPtr;
	 }  // end if

	 return ListIterator(this, newPtr);
      }
      catch (bad_alloc e)
      {
	 throw ListException(
	    "ListException: insert cannot allocate memory");
      }  // end try
   }
   else
      throw ListException(
	 "ListException: insert has bad iterator value");
}  // end insert
