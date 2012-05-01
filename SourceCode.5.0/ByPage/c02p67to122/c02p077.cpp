/** @pre n must be greater than or equal to 0.
 *  @return The factorial of n. */
int fact(int n)
{
   if (n == 0)
      return 1;
   else  // Invariant: n > 0, so n-1 >= 0.
         // Thus, fact(n-1) returns (n-1)!
      return n * fact(n-1);  // n * (n-1)! is n!
}  // end fact
