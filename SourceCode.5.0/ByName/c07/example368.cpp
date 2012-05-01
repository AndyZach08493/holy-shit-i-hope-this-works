#include <iostream>
#include <list>
#include <queue>
#include <stack>
using namespace std;

int main()
{
   list<int> myList;  // create an empty list
   list<int>::iterator i = myList.begin();

   for (int j = 1; j < 5; j++)
   {  i = myList.insert(i, j);
      i++;
   }  // end for

   cout << "myList:  ";
   i = myList.begin();
   while (i != myList.end())
   {  cout << *i << " ";
      i++;
   }  // end while
   cout << endl;

   // assumes the front of the list is the front of the
   // queue
   queue<int, list<int> > myQueue(myList);

   // assumes the back of the list is the top of the stack
   stack<int, list<int> > myStack(myList);

   cout << "myQueue: ";
   while (!myQueue.empty())
   {  cout << myQueue.front() << " ";
      myQueue.pop();
   }  // end while
   cout << endl;

   cout << "myStack: ";
   while (!myStack.empty())
   {  cout << myStack.top() << " ";
      myStack.pop();
   }  // end while
   cout << endl;
   return 0;
}  // end main
