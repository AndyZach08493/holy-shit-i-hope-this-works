void linkedListInsert(Node *& headPtr,
		      ListItemType newItem)
{
   if ( (headPtr == NULL) || (newItem < headPtr->item) )
   {  // Base case: insert newItem at beginning
      // of the linked list to which headPtr points
      try // to allocate memory.
      {  Node *newPtr = new Node;
         newPtr->item = newItem;
	 newPtr->next = headPtr;
	 headPtr = newPtr;
      }  // end try
      catch (bad_alloc e)
      {
	 throw ListException(
	    "ListException: insert cannot allocate memory.");
      }  // end catch
   }
   else
      linkedListInsert(headPtr->next,newItem);
}  // end linkedListInsert
