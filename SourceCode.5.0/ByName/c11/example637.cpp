#include <map>
#include <iostream>
#include <string>

using namespace std;

int main()
{
   // declare a map to contain names and phone numbers
   map<string, string> phoneBook;

   // declare a map iterator
   map<string, string>::const_iterator it1;

   string name1 = "Smith, John";
   string name2 = "Thompson, Julia";
   string name3 = "Johnson, Mary";
   string name4 = "Little, Carol";
   string name5 = "Johnson, Mary";
   string phone1 = "212-555-4444";
   string phone2 = "806-555-6565";
   string phone3 = "445-555-7111";
   string phone4 = "745-555-6787";
   string phone5 = "745-555-7777";

   // assign elements to map using subscripts
   phoneBook[name1] = phone1;
   phoneBook[name2] = phone2;
   phoneBook[name3] = phone3;
   phoneBook[name4] = phone4;
   phoneBook[name5] = phone5;

   // print map elements
   // duplicate name keys are not listed
   for (it1 = phoneBook.begin(); it1 != phoneBook.end(); ++it1)
   {
      cout << it1->first << '\t' << it1->second << endl;
   }  // end for

   // find a map element
   it1 = phoneBook.find(string(name3));

   // display found map element
   if (it1 != phoneBook.end())
      cout << " Search for " << it1->first
	   << " - phone numbers" << endl
	   << it1->second << endl << endl;

   // create a multimap to contain names and phone numbers
   // use the make_pair function to insert elements
   multimap<string, string> phoneBook2;
   phoneBook2.insert(make_pair(name1, phone1));
   phoneBook2.insert(make_pair(name2, phone2));
   phoneBook2.insert(make_pair(name3, phone3));
   phoneBook2.insert(make_pair(name4, phone4));
   phoneBook2.insert(make_pair(name5, phone5));

   typedef multimap<string, string>::const_iterator iter2;

   // print map elements
   for (iter2 it2 = phoneBook2.begin();
        it2 != phoneBook2.end(); ++it2)
   {
      cout << it2->first << '\t' << it2->second << endl;
   }  // end for

   // returns map pairs with the same key
   pair<iter2, iter2> phoneNum = phoneBook2.equal_range(name3);

   // display pairs with same key
   cout << "Search for " << name3
        << " - phone numbers: " << endl;

   for(iter2 it2 = phoneNum.first; it2 != phoneNum.second; ++it2)
      cout << it2->second << endl;

   return 0;
}  // end main
