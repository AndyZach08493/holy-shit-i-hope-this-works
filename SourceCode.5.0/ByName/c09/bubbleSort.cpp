/** Sorts the items in an array into ascending order.
 * @pre theArray is an array of n items.
 * @post theArray is sorted into ascending order; n is unchanged.
 * @param theArray  The given array.
 * @param n  The size of theArray. */
void bubbleSort(DataType theArray[], int n)
{
   bool sorted = false;  // false when swaps occur

   for (int pass = 1; (pass < n) && !sorted; ++pass)
   {  // Invariant: theArray[n+1-pass..n-1] is sorted
      //            and > theArray[0..n-pass]
      sorted = true;  // assume sorted
      for (int index = 0; index < n-pass; ++index)
      {  // Invariant: theArray[0..index-1] <=
         // theArray[index]
         int nextIndex = index + 1;
         if (theArray[index] > theArray[nextIndex])
         {  // exchange items
            swap(theArray[index], theArray[nextIndex]);
            sorted = false;  // signal exchange
         }  // end if
      }  // end for

      // Assertion: theArray[0..n-pass-1] <
      // theArray[n-pass]
   }  // end for
}  // end bubbleSort
