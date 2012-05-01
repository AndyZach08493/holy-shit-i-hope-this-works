#include <iostream>
#include "StackA.h"

using namespace std;

int main()
{
   StackItemType anItem;
   Stack aStack;

   cin >> anItem;            // read an item
   aStack.push(anItem);      // push it onto stack

   return 0;
} // end main
