List::List(const List& aList)
   : size(aList.size)
{
   if (aList.head == NULL)
      head = NULL;  // original list is empty

   else
   {  // copy first node
      head = new ListNode;
      head->item = aList.head->item;

      // copy rest of list
      ListNode *newPtr = head;  // new list pointer
      // newPtr points to last node in new list
      // origPtr points to nodes in original list
      for (ListNode *origPtr = aList.head->next;
	   origPtr != NULL;
	   origPtr = origPtr->next)
      {  newPtr->next = new ListNode;
         newPtr = newPtr->next;
	 newPtr->item = origPtr->item;
      }  // end for

      newPtr->next = NULL;
   }  // end if
}  // end copy constructor
