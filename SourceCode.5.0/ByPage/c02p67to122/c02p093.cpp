/** Computes the number of groups of k out of n things.
 * @pre n and k are nonnegative integers.
 * @post None.
 * @param n  The given number of things.
 * @param k  The given number to choose.
 * @return c(n, k). */
int c(int n, int k)
{
   if ( (k == 0) || (k == n) )
      return 1;
   else if (k > n)
      return 0;
   else
      return c(n-1, k-1) + c(n-1, k);
}  // end c
