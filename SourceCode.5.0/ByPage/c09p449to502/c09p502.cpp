void shellsort(DataType theArray[], int n)
{
   for (int h = n/2; h > 0; h = h/2)
   {  for (int unsorted = h; unsorted < n; ++unsorted)
      {  DataType nextItem = theArray[unsorted];
         int loc = unsorted;
         for (; (loc >= h) && (theArray[loc-h] > nextItem);
	      loc = loc - h)
            theArray[loc] = theArray[loc-h];
         theArray[loc] = nextItem;
      }  // end for
   }  // end for
}  // end shellsort
