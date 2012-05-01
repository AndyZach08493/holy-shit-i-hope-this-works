// Self-Test 1

/** @pre 1 <= n <= max size of anArray.
 *  @post None.
 *  @return The product of the first n items in anArray. */
double product(const double anArray[], int n)
{
   if (n == 1)
      return anArray[0];
   else
      return anArray[n-1] * product(anArray, n-1);
}  // end product
