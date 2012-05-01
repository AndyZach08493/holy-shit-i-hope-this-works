/** Computes the factorial of an integer.
 * @pre <tt>n >= 0</tt>.
 * @post None.
 * @param n  The given integer.
 * @return <tt>n * (n - 1) * ... * 1</tt>, if <tt>n > 0</tt>;
 *         else 1, if <tt>n == 0</tt>. */
int factorial(int n)
{
   int fact = 1;

   for (int i = n; i > 1; --i)
      fact *= i;

   return fact;
} // end factorial
