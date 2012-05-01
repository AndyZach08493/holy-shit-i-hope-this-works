// Saves a linked list's data in a text file of
// integers; head points to the linked list.

// fileName is a string that names an external text
// file to be created
ofstream outFile(fileName);

// traverse the list to the end, writing each item
for (Node *cur = head; cur != NULL; cur = cur->next)
   outFile << cur->item << endl;

outFile.close();
// Assertion: The text file contains the linked
// list's data in its original order.
