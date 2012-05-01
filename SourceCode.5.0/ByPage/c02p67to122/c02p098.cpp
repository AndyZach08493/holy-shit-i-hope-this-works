/** Searches the array anArray[first] through anArray[last]
 *  for value by using a binary search.
 * @pre 0 <= first, last <= SIZE - 1, where SIZE is the
 *      maximum size of the array, and anArray[first] <=
 *      anArray[first + 1] <= ... <= anArray[last].
 * @post None.
 * @param anArray  The array to search.
 * @param first  The low index to start search from.
 * @param last  The high index to stop searching at.
 * @param value  The search key.
 * @return If value is in anArray, the function returns the
 *         index of the array item that equals value;
 *         otherwise the function returns -1. */
int binarySearch(const int anArray[], int first,
		 int last, int value)
{
   int index;
   if (first > last)
      index = -1;      // value not in original array

   else
   {  // Invariant: If value is in anArray,
      //            anArray[first] <= value <= anArray[last]
      int mid = (first + last)/2;
      if (value == anArray[mid])
	 index = mid;  // value found at anArray[mid]

      else if (value < anArray[mid])
         // point X
	 index = binarySearch(anArray, first, mid-1, value);

      else
	 // point Y
	 index = binarySearch(anArray, mid+1, last, value);
   }  // end if
   return index;
}  // end binarySearch
