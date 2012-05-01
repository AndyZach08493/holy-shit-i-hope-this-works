// Computes n! for an integer n >= 0
int f = 1;

// Invariant: f == (j - 1)!
for (int j = 1; j <= n; ++j)
   f *= j;

// Computes an approximation to e^x for a real x
double t = 1.0;
double s = 1.0;
int k = 1;

// Invariant: t == x^(k - 1) / (k - 1)! and
// s == 1 + x + x^2 / 2! + ... + x^(k - 1) / (k - 1)!
while (k <= n)
{  t *= x / k;
   s += t;
   ++k;
}  // end while
