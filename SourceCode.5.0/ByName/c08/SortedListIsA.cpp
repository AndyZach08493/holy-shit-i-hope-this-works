SortedList::SortedList()
{
}  // end default constructor

SortedList::SortedList(const SortedList& sList)
   : List(sList)
{
}  // end copy constructor

SortedList::~SortedList()
{
}  // end destructor

void SortedList::sortedInsert(const ListItemType& newItem)
   throw(ListException)
{
   bool found;
   int newPosition = locatePosition(newItem, found);
   insert(newPosition, newItem);
}  // end sortedInsert

void SortedList::sortedRemove(const ListItemType& anItem)
   throw(ListException)
{
   bool found;
   int position = locatePosition(anItem, found);
   if (found) // item actually found
      remove(position);
   else
      throw ListException(
         "ListException: Item to remove not found");
}  // end sortedRemove

int SortedList::locatePosition(const ListItemType& anItem,
                               bool& isPresent)
{
   ListNode *trav = getHead();
   int position = 1;
   while ((trav != NULL) && (getNodeItem(trav) < anItem))
   {
      trav = getNextNode(trav);
      position++;
   }  // end while
   if ((trav != NULL) && (anItem == getNodeItem(trav)))
      isPresent = true;
   else
      isPresent = false;
   return position;
}  // end locatePosition
