void SortedList::sortedInsert(const ListItemType& newItem)
   throw(ListException)
{
   bool found;
   int newPosition = locatePosition(newItem, found);
   aList.insert(newPosition, newItem);
}  // end sortedInsert
