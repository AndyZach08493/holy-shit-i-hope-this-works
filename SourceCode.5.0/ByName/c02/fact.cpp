/** Computes the factorial of the nonnegative integer n.
 * @pre n must be greater than or equal to 0.
 * @post None.
 * @return The factorial of n; n is unchanged. */
int fact(int n)
{
   if (n == 0)
      return 1;
   else
      return n * fact(n-1);
}  // end fact
