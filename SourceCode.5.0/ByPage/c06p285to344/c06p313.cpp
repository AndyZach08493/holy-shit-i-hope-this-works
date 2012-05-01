#include <iostream>
#include <stack>
using namespace std;

int main()
{
   stack<int> aStack;

   // Right now, the stack is empty
   if (aStack.empty())
      cout << "The stack is empty" << endl;

   for (int j = 0; j < 5; j++)
      aStack.push(j); // places items on top of stack

   while (!aStack.empty())
   {
      cout << aStack.top() << " ";
      aStack.pop();
   }  // end while
   return 0;
}  // end main
