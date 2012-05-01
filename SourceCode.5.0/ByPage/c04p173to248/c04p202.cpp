bool List::isEmpty() const
{
   return size == 0;
}  // end isEmpty

int List::getLength() const
{
   return size;
}  // end getLength

List::ListNode *List::find(int index) const
{
   if ( (index < 1) || (index > getLength()) )
      return NULL;

   else  // count from the beginning of the list.
   {  ListNode *cur = head;
      for (int skip = 1; skip < index; ++skip)
         cur = cur->next;
      return cur;
   }  // end if
}  // end find

void List::retrieve(int index,
                    ListItemType& dataItem) const
   throw(ListIndexOutOfRangeException)
{
   if ( (index < 1) || (index > getLength()) )
      throw ListIndexOutOfRangeException(
	 "ListIndexOutOfRangeException: retrieve index out of range");
   else
   {  // get pointer to node, then data in node
      ListNode *cur = find(index);
      dataItem = cur->item;
   }  // end if
}  // end retrieve
