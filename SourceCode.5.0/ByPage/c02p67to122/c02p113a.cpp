/** Computes the nth term in the Fibonacci sequence, iterative
 *  version.
 * @pre n is a positive integer.
 * @post None.
 * @param n The given integer.
 * @return The nth Fibonacci number. */
int iterativeRabbit(int n)
{
   // Initialize base cases:
   int previous = 1; // Initially rabbit(1)
   int current = 1;  // Initially rabbit(2)
   int next = 1;     // Result when n is 1 or 2

   // Compute next rabbit values when n >= 3
   for (int i = 3; i <= n; ++i)
   {  // current is rabbit(i-1), previous is rabbit(i-2)
      next = current + previous; // rabbit(i)
      previous = current;        // Get ready for
      current = next;            // next iteration
   }  // end for

   return next;
}  // end iterativeRabbit
