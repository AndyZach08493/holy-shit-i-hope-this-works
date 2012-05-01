bool List::operator==(const List& rhs) const
{
   bool isEqual;
   if (size != rhs.size)
      isEqual = false;  // lists have unequal lengths

   else if ( (head == NULL) && (rhs.head == NULL) )
      isEqual = true;  // both lists are empty

   else  // lists have same length > 0;
         // head pointers not NULL
   {  // compare items
      ListNode *leftPtr = head;
      ListNode *rightPtr = rhs.head;
      int count;
      for (count = 1;
	   (count <= size) &&
	      (leftPtr->item == rightPtr->item);
	   ++count)
      {  leftPtr = leftPtr->next;
         rightPtr = rightPtr->next;
      }  // end for

      isEqual = count > size;
   }  // end if
   return isEqual;
}  // end operator==
