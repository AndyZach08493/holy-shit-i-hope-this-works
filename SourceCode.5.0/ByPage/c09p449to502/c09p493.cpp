#include <algorithm>
#include <functional>
#include <ctime>
#include <vector>
#include <iostream>

using namespace std;

// number of elements in the vectors
const int SIZE = 25;

int main()
{
   // create four vectors for sorting algorithms
   vector<int> v1;
   vector<int> v2(SIZE);
   vector<int> v3(SIZE);
   vector<int> v4(SIZE);

   // create an iterator for the vectors
   vector<int>::iterator iter;

   // seed the random number generator
   srand(time(0));

   // fill the first vector with random numbers from 1 to 50
   for (int i = 0; i < SIZE; i++)
      v1.push_back(rand() % 50);

   // print the original vector
   cout << "original vector: " << endl;
   for (iter = v1.begin(); iter != v1.end(); iter++)
      cout << *iter << " ";

   // copy vectors
   copy(v1.begin(), v1.end(), v2.begin());
   copy(v1.begin(), v1.end(), v3.begin());
   copy(v1.begin(), v1.end(), v4.begin());

   // perform a stable_sort on the first vector
   stable_sort(v1.begin(), v1.end());

   // print out the stable_sort vector
   cout << endl << "stable sort: " << endl;
   for (iter = v1.begin(); iter != v1.end(); iter++)
      cout << *iter << " ";

   // perform a partial_ sort on the second vector
   partial_sort(v2.begin(), v2.begin() + v2.size()/2, v2.end());
   // print out the partial_sort vector
   cout << endl << "partial sort to the " << v2.size()/2
        << "th element: " << endl;
   for (iter = v2.begin(); iter != v2.end(); iter++)
      cout << *iter << " ";

   // perform a nth_element sort on the third vector
   int n = 15;
   iter = v3.begin() + n;  // iterator points to the nth element
   nth_element(v3.begin(), iter, v3.end());

   // print out the nth_element vector
   cout << endl << "nth element sort on the " << n
	<< "th element with nth value " << v3[n-1]
	<< ": " << endl;
   for (iter = v3.begin(); iter != v3.end(); iter++)
      cout << *iter << " ";

   // perform a stable_partition sort on the fourth vector
   // iterator points to the first element that does not meet the
   // criterion - odd numbers
   // bind2nd is an C++ library function that creates a
   // unary predicate from two arguments
   iter = stable_partition(v4.begin(), v4.end(),
                           bind2nd(modulus<int>(), 2));

   // print out the stable_partition vector
   cout << endl
        << "stable_partition sort for odd and even numbers: "
        <<  "the partition element is "
        << *iter << ": " << endl;
   for (iter = v4.begin(); iter != v4.end(); iter++)
            cout << *iter << " ";
   cout << endl;

   return 0;
}  // end main
