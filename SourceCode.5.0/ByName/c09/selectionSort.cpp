typedef type-of-array-item DataType;

/** Sorts the items in an array into ascending order.
 * @pre theArray is an array of n items.
 * @post The array theArray is sorted into ascending order; n is
 *       unchanged.
 * @param theArray  The array to sort.
 * @param n  The size of theArray. */
void selectionSort(DataType theArray[], int n)
{
   // last = index of the last item in the subarray of
   //        items yet to be sorted,
   // largest = index of the largest item found

   for (int last = n-1; last >= 1; --last)
   {  // Invariant: theArray[last+1..n-1] is sorted and
      // > theArray[0..last]

      // select largest item in theArray[0..last]
      int largest = indexOfLargest(theArray, last+1);

      // swap largest item theArray[largest] with
      // theArray[last]
      swap(theArray[largest], theArray[last]);
   }  // end for
}  // end selectionSort

/** Finds the largest item in an array.
 * @pre theArray is an array of size items, size >= 1.
 * @post None.
 * @param theArray  The given array.
 * @param size  The number of elements in theArray.
 * @return The index of the largest item in the array. The
 *         arguments are unchanged. */
int indexOfLargest(const DataType theArray[], int size)
{
   int indexSoFar = 0;  // index of largest item
                        // found so far
   for (int currentIndex = 1; currentIndex < size;
                              ++currentIndex)
   {  // Invariant: theArray[indexSoFar] >=
      //            theArray[0..currentIndex-1]
     if (theArray[currentIndex] > theArray[indexSoFar])
         indexSoFar = currentIndex;
   }  // end for

   return indexSoFar;  // index of largest item
}  // end indexOfLargest

/** Swaps two items.
 * @pre x and y are the items to be swapped.
 * @post Contents of actual locations that x and y represent are
 *       swapped.
 * @param x  Given data item.
 * @param y  Given data item. */
void swap(DataType& x, DataType& y)
{
   DataType temp = x;
   x = y;
   y = temp;
}  // end swap
