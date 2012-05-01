// Computes and writes floor(sqrt(x)) for
// an input value x >= 0.

int main()
{
   int x;  // input value

   // initialize
   int result = 0;  // will equal floor of sqrt(x)
   int temp1 = 1;
   int temp2 = 1;

   cin >> x;        // read input

   // compute floor
   while (temp1 < x)
   {  ++result;
      temp2 += 2;
      temp1 += temp2;
   }  // end while

   cout << "The floor of the square root of "
	<< x << " is " << result << endl;
   return 0;
}  // end main
