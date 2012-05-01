#include <iostream>
#include <queue>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
   //declare a priority queue
   priority_queue<int, vector<int> > pq;

   // declare a vector
   vector<int> vheap;

   // declare a vector iterator
   vector<int>::iterator iter;

   // seed the random number generator
   srand(time(0));

   // fill the priority queue and vector with the random numbers
   // push each number of the vector onto a heap
   // using the greater predicate
   for (int i=0; i < 25; i++)
   {
      int j = rand() % 25;
      pq.push(j);
      vheap.push_back(j);
      push_heap(vheap.begin(), vheap.end(), greater<int>() );
   }  // end for

   // show the generated numbers in their original order by
   // iterating through the vector
   cout << "Original numbers: " << endl;
   for (iter = vheap.begin(); iter != vheap.end(); iter++)
      cout << *iter << " ";

   // display the priority queue by popping the top off
   cout << endl << "Priority queue: " << endl;
   while (!pq.empty())
   {
      cout << pq.top() << " ";
      pq.pop();
   }  // end while

   // display the vector as a heap by popping the top off
   cout << endl << "Heap: " << endl;
   while (!vheap.empty())
   {
      cout << vheap[0] << " ";
      pop_heap(vheap.begin(), vheap.end(), greater<int>());
      vheap.pop_back();
   }  // end while

   cout << endl;

   return 0;
}  // end main
