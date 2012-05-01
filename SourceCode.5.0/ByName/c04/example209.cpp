// Creates a linked list from the data in a text
// file.  The pointer variables head and tail are
// initially NULL.  fileName is a string that names
// an existing external text file.

ifstream inFile(fileName);
int      nextItem;

if (inFile >> nextItem) // Is file empty?
{  // File not empty:
   try
   {  head = new Node;
      // Add the first integer to the list.
      head->item = nextItem;
      head->next = NULL;
      tail = head;

      // Add remaining integers to linked list.
      while (inFile >> nextItem)
      {  tail->next = new Node;
         tail = tail->next;
	 tail->item = nextItem;
	 tail->next = NULL;
      }  // end while
   }  // end try
   catch (bad_alloc e)
   {  throw ListException(
      "ListException: restore cannot allocate memory.");
   }  // end catch
}  // end if

inFile.close();

// Assertion: head points to the first node of the
// created linked list; tail points to the last
// node. If the file is empty, head and tail are
// NULL (list is empty).
