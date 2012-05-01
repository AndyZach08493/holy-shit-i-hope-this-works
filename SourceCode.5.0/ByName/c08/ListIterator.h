/** @file ListIterator.h. */

#include "ListNode.h" // Definition of ListNode and
                      // ListItemType; ListNode declares
                      // ListIterator as a friend class

/** @class ListIterator
 *  Used in the iterator version of the ADT list. */
class ListIterator
{
public:
   ListIterator(const List *aList, ListNode *nodePtr);

   const ListItemType& operator*();
   ListIterator operator++();    // prefix ++

   bool operator==(const ListIterator& rhs) const;
   bool operator!=(const ListIterator& rhs) const;

   friend class List;

private:
   const List *container; // ADT associated with iterator
   ListNode *cur;         // current location in collection
}; // end ListIterator
