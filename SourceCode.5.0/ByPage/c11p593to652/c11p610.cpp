/** @file TableA.cpp
 * Excerpts from the implementation file TableA.cpp.
 * Sorted array-based implementation. */

#include "TableA.h"  // header file

void Table::tableInsert(const TableItemType& newItem)
   throw(TableException)
// Note: Insertion is unsuccessful if the table is full,
// that is, if the table already contains MAX_TABLE items.
// Calls: position.
{
   if (size == MAX_TABLE)
      throw TableException("TableException: Table full");

   // there is room to insert;
   // locate the position where newItem belongs
   int spot = position(newItem.getKey());

   // shift up to make room for the new item
   for (int index = size-1; index >= spot; --index)
      items[index+1] = items[index];

   // make the insertion
   items[spot] = newItem;
   ++size;
}  // end tableInsert

void Table::tableDelete(KeyType searchKey)
   throw(TableException)
// Calls: position.
{
   // locate the position where searchKey exists/belongs
   int spot = position(searchKey);

   // is searchKey present in the table?
   if ((spot > size) || (items[spot].getKey() != searchKey))
      // searchKey not in table
      throw TableException("TableException: Item not found on delete");
   else
   {  // searchKey in table
      --size;  // delete the item

      // shift down to fill the gap
      for (int index = spot; index < size; ++index)
         items[index] = items[index+1];
   }  // end if
}  // end tableDelete

void Table::tableRetrieve(KeyType searchKey,
                          TableItemType& tableItem) const
   throw(TableException)
// Calls: position.
{
   // locate the position where searchKey exists/belongs
   int spot = position(searchKey);

   // is searchKey present in table?
   if ((spot > size) || (items[spot].getKey() != searchKey))
      // searchKey not in table
      throw TableException("TableException: Item not found on retrieve");
   else
      tableItem = items[spot];  // item present; retrieve it
}  // end tableRetrieve

void Table::traverseTable(FunctionType visit)
{
   for (int index = 0; index < size; ++index)
       visit(items[index]);
}  // end traverseTable
// End of implementation file.
