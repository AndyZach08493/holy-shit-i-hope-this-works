// Self-Test 1

#include <iostream>
using namespace std;

int main()
{
   int *p = new int;
   int *q = new int;
   cout << p << " " << q << endl;

   *p = 7;
   *q = 11;
   int *r = q;
   cout << *p << " " << *q << " " << *r << endl;

   *r = *q + *p;
   cout << *p << " " << *q << " " << *r << endl;

   q = new int;
   *q = 4;
   cout << *p << " " << *q << " " << *r << endl;

   delete r;
   r = NULL;

   return 0;
}  // end main
