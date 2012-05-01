void List::insert(int index, const ListItemType& newItem)
   throw(ListIndexOutOfRangeException, ListException)
{
   int newLength = getLength() + 1;

   if ( (index < 1) || (index > newLength) )
      throw ListIndexOutOfRangeException(
	 "ListIndexOutOfRangeException: insert index out of range");
   else
   {  // try to create new node and place newItem in it
      try
      {
	 ListNode *newPtr = new ListNode;
	 size = newLength;
	 newPtr->item = newItem;

	 // attach new node to list
	 if (index == 1)
	 {  // insert new node at beginning of list
	    newPtr->next = head;
	    head = newPtr;
	 }
	 else
	 {  ListNode *prev = find(index-1);
            // insert new node after node
            // to which prev points
            newPtr->next = prev->next;
	    prev->next = newPtr;
	 }  // end if
      }  // end try
      catch (bad_alloc e)
      {
	 throw ListException(
	    "ListException: memory allocation failed on insert");
      }  // end catch
   }  // end if
}  // end insert
