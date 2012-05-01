#include "ListT.h"

int main()
{
   List<double> floatList;
   List<char>   charList;

   floatList.insert(1, 1.1);
   floatList.insert(2, 2.2);

   charList.insert(1, 'a');
   charList.insert(2, 'b');

   return 0;
}  // end main
