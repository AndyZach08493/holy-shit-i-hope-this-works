void SortedList::insert(const ListItemType& newItem)
   throw(ListException)
{
   bool found;
   int newPosition = locatePosition(newItem, found);
   List::insert(newPosition, newItem);
}  // end insert
