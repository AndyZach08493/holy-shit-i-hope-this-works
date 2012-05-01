// Exercise 23

int gcd(int a, int b)
{
   if (a % b == 0)  // base case
      return b;
   else
      return gcd(b, a % b);
}  // end gcd
