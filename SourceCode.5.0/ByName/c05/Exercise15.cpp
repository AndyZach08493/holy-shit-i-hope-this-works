// Exercise 15

int p(int x)
{  if (x <= 3)
      return x;
   else
      return p(x - 1) * p(x - 3);
}  // end p
