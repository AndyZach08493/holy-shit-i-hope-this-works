#include <iostream>
#include "ListI.h"

using namespace std;

int main()
{
   List aList;

   ListIterator i = aList.begin();
   for (int j = 1; j <= 5; j++)
   {
      i = aList.insert(i, j);
   }  // end for

   i = aList.begin();
   while (i != aList.end())
   {
      cout << *i << " ";
      i = aList.remove(i);
   }  // end while
   cout << endl;

   return 0;
}  // end main
