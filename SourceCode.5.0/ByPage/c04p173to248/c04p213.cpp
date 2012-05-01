/** Writes a string backward.
 * @pre The string is represented as a linked list.
 * @post The string is displayed backward. The linked list and
 *       stringPtr are unchanged.
 * @param stringPtr Pointer to the first Node in a string. */
void writeBackward2(Node *stringPtr)
{
   if (stringPtr != NULL)
   {  // write the string minus its first character backward
      writeBackward2(stringPtr->next);

      // write the first character
      cout << stringPtr->item;
   }  // end if
}  // end writeBackward2
