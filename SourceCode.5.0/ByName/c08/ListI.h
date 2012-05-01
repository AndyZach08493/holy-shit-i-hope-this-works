/** @file ListI.h */

#include "ListIterator.h"
#include "ListException.h"
#include "ListNode.h"

/** ADT list - Uses ListIterator. */
class List
{
public:
// constructors and destructor:
   List();
   List(const List& aList);
   ~List();

// List operations:
   bool isEmpty() const;
   int getLength() const;

   /** Inserts an item into a list after the item specified by
    *  iter.  An iterator to the newly added item is returned.
    * @pre Iterator iter specifies either an item in the list or
    *      the end of the list.
    * @post  If iter equals the value returned by end(), newItem is
    *       placed at the end of the list.
    * @return An iterator to newItem within the list.
    * @throw ListException  If the iterator is not initialized
    *        properly for this list, or if memory allocation
    *        fails. */
   ListIterator insert(ListIterator iter, const ListItemType& newItem)
      throw(ListException);

   /** Retrieves an item in the list.
    * @pre Iterator iter specifies an item in the list.
    * @post dataItem is the value of the desired item.
    * @throw ListException  If the iterator is not
    *        initialized properly for this list. */
   void retrieve(ListIterator iter,
                 ListItemType& dataItem) const
      throw(ListException);

   /** Removes an item from the list and returns an iterator to the
    *  item after the removed item.
    * @pre Iterator iter specifies an item in the list.
    * @post The item specified by iter is removed from the list.
    * @return An iterator that references the item after the one
    *         removed. If the last item in the list is removed,
    *         returns an iterator that is equal to the result
    *         returned by end().
    * @throw ListException  If the iterator is not
    *        initialized properly for this list. */
  ListIterator remove(ListIterator iter) throw(ListException);

   /** Returns an iterator that references the first item in the
    *  list.
    * @pre None.
    * @post None.
    * @return An iterator to the first item in the list. If the
    *         list is empty, returns an iterator that is equal to
    *         the result returned by end(). */
   ListIterator begin() const;

   /** Returns an iterator value that can be used to determine
    *  whether an iterator has reached the end of the list.
    * @pre None.
    * @post None
    * @return An iterator indicating the end of the list. */
   ListIterator end() const;

private:
   /** Number of items in the list. */
   int      size;
   /** Pointer to the linked list. */
   ListNode *head;

   /** Locates the node before the node specified by iter.
    * @pre The list is not empty (head != NULL).
    * @post None.
    * @return A pointer to the node before the node referenced by
    *         iter.  If iter == end(), returns a pointer to the
    *         last node in the list. */
   ListNode *findPrev(ListIterator iter);
}; // end List
