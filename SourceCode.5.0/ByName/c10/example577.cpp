#include <algorithm>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main()
{
   //create a vector of strings
   vector<string> s;

   //create two vector iterators
   vector<string>::iterator iter1;
   vector<string>::iterator iter2;

   //add some items to the vector
   s.push_back("juice");
   s.push_back("apples");
   s.push_back("rice");
   s.push_back("juice");
   s.push_back("bread");
   s.push_back("oranges");
   s.push_back("juice");
   s.push_back("milk");
   s.push_back("ice cream");
   s.push_back("carrots");

   //display the vector
   for (iter1 = s.begin(); iter1 != s.end(); iter1++)
      cout << *iter1 <<  endl;

   // sort the vector
   sort(s.begin(), s.end());

   // search item
   string str("juice");

   // perform binary search for item
   // display whether item was found or not (1 or 0)
   cout << endl << "binary search: "
        << binary_search(s.begin(), s.end(), str) << endl;

   // find range of equal items with lower and upper bounds
   iter1 = lower_bound(s.begin(), s.end(), str);
   iter2 = upper_bound(s.begin(), s.end(), str);

   // display occurrences of item
   cout << endl <<  "Finding lower and upper bounds for "
        << str <<": " << endl;
   int i = 0;
   for (iter1; iter1 != iter2; iter1++)
      ++i;
   cout << i << " occurrences of " << str << endl;
   // find range of equal items with equal_range
   pair<vector<string>::iterator, vector<string>::iterator> eq =
      equal_range(s.begin(), s.end(), str);

   // display occurrences of item
   cout << endl <<  "Finding equal_range for "
        << str << ": " << endl;
   i = 0;
   for (eq.first; eq.first != eq.second; eq.first++)
      ++i;
   cout << i << " occurrences of " << str << endl;

   return 0;
}  // end main
