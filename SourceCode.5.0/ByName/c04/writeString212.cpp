struct Node
{  char  item;
   Node *next;
}; // end Node

Node *stringPtr;

/** Writes a string.
 * @pre The string is represented as a linked list.
 * @post The string is displayed. The linked list and stringPtr are
 *       unchanged.
 * @param stringPtr Pointer to the first Node in a string. */
void writeString(Node *stringPtr)
{
   if (stringPtr != NULL)
   {  // write the first character
      cout << stringPtr->item;
      // write the string minus its first character
      writeString(stringPtr->next);
   }  // end if
}  // end writeString
