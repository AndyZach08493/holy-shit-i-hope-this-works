// Exercise 13

void displayOctal(int n)
{
   if (n > 0)
   {  if (n/8 > 0)
         displayOctal(n/8);
      cout << n % 8;
   }  // end if
}  // end displayOctal
