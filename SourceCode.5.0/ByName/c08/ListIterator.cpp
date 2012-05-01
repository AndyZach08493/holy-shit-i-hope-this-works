/** @file ListIterator.cpp */

#include "ListIterator.h"

ListIterator::ListIterator(const List *aList,
                           ListNode *nodePtr)
                           : container(aList), cur(nodePtr)
{
}  //end constructor

const ListItemType& ListIterator::operator*()
{
   return cur->item;
}  // end operator*

ListIterator ListIterator::operator++()
{
   cur = cur->next;
   return *this;
}  // end prefix operator++

bool ListIterator::operator==(const ListIterator& rhs) const
{
   return ((container==rhs.container) &&
           (cur == rhs.cur));
}  // end operator ==

bool ListIterator::operator!=(const ListIterator& rhs) const
{
   return !(*this == rhs);
}  // end operator !=
