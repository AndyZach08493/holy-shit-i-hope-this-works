// Display the data in a linked list to which head points.
// Loop invariant: cur points to the next node to be
// displayed
for (Node *cur = head; cur != NULL; cur = cur->next)
   cout << cur->item << endl;
