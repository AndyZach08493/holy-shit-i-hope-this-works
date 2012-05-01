// Exercise 1

int getNumberEqual(const int x[], int n, int desiredValue)
{
   int count;

   if (n <= 0)
      return 0;
   else
   {  if (x[n-1] == desiredValue)
	 count = 1;
      else
	 count = 0;
      return getNumberEqual(x, n-1, desiredValue) + count;
   }  // end if
}  // end getNumberEqual
