/** @file ListT.cpp
 * Excerpts from the implementation. */

#include <cstddef>  // for NULL
#include <new>      // for bad_alloc

using namespace std;

template <typename T>
List<T>::List(): size(0), head(NULL)
{
}  // end default constructor

template <typename T>
void List<T>::insert(int index, const T & newItem)
   throw(ListIndexOutOfRangeException, ListException)
{
   int newLength = getLength() + 1;

   if ((index < 1) || (index > newLength))
      throw ListIndexOutOfRangeException(
	 "ListIndexOutOfRangeException: insert index out of range");
   else
   {  // create new node and place newItem in it
      try
      {  ListNode<T> *newPtr = new ListNode<T>;
         size = newLength;
	 newPtr->item = newItem;

	 // attach new node to list
	 if (index == 1)
	 {  // insert new node at beginning of list
	    newPtr->next = head;
	    head = newPtr;
	 }
	 else
	 {  ListNode<T> *prev = find(index-1);
            // insert new node after node
            // to which prev points
            newPtr->next = prev->next;
	    prev->next = newPtr;
	 }  // end if
      }
      catch (bad_alloc e)
      {
	 throw ListException(
	    "ListException: insert cannot allocate memory");
      }  // end try
   }  // end if
}  // end insert

template <typename T>
ListNode<T> *List<T>::find(int index) const
{
   if ( (index < 1) || (index > getLength()) )
      return NULL;
   else  // count from the beginning of the list
   {  ListNode<T> *cur = head;
      for (int skip = 1; skip < index; ++skip)
         cur = cur->next;
      return cur;
   }  // end if
}  // end find
