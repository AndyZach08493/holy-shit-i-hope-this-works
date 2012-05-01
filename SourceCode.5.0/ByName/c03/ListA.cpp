/** @file ListA.cpp */

#include "ListA.h"  // header file

List::List() : size(0)
{
}  // end default constructor

bool List::isEmpty() const
{
   return size == 0;
}  // end isEmpty

int List::getLength() const
{
   return size;
}  // end getLength

void List::insert(int index, const ListItemType& newItem,
                  bool& success)
{
   success = (index >= 1) &&
             (index <= size + 1) &&
             (size < MAX_LIST);
   if (success)
   {  // make room for new item by shifting all items at
      // positions >= index toward the end of the
      // List (no shift if index == size + 1)
      for (int pos = size; pos >= index; --pos)
         items[translate(pos + 1)] = items[translate(pos)];
      // insert new item
      items[translate(index)] = newItem;
      ++size;  // increase the size of the list by one
   }  // end if
}  // end insert

void List::remove(int index, bool& success)
{
   success = (index >= 1) && (index <= size);
   if (success)
   {  // delete item by shifting all items at positions >
      // index toward the beginning of the list
      // (no shift if index == size)
      for (int fromPosition = index + 1;
	   fromPosition <= size;
	   ++fromPosition)
         items[translate(fromPosition - 1)] = items[translate(fromPosition)];
      --size;  // decrease the size of the list by one
   }  // end if

}  // end remove

void List::retrieve(int index, ListItemType& dataItem,
                    bool& success) const
{
   success = (index >= 1) && (index <= size);
   if (success)
      dataItem = items[translate(index)];
}  // end retrieve

int List::translate(int index) const
{
   return index - 1;
}  // end translate
//  End of implementation file.
