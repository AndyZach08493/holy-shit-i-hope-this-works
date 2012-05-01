// display the data in a circular linked list;
// list points to its last node
if (list != NULL)
{  // list is not empty
   Node *first = list->next; // point to first node

   Node *cur = first;        // start at first node
   // Loop invariant: cur points to next node to
   // display
   do
   {  display(cur->item);      // write data portion
      cur = cur->next;         // point to next node
   } while (cur != first);     // list traversed?
}  // end if
