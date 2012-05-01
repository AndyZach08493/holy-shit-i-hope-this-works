#include <list>
#include <iostream>
#include <string>
#include <new>
using namespace std;

// define a list of pointer strings
typedef list<string*, allocator<string*> > STRING_PTR;

namespace std
{
   // override the default behavior of sort
   template<> struct greater<string*>
   {
      // override operator() to create a function object
      bool operator() (string* s1, string *s2)
      {
	 return (*s1) > (*s2);
      }  // end operator()
   }; // end std::greater
}  // end std namespace

int main()
{
   // create a list of pointer strings and a list iterator
   STRING_PTR groceryList;
   STRING_PTR::iterator i;

   // create pointers to strings in a random order
   // insert the string pointers to the end of the list
   try
   {
      string* str = new string ("apples");
      groceryList.insert(groceryList.end(), str);
      str = new string ("bread");
      groceryList.insert(groceryList.end(), str);
      str = new string ("juice");
      groceryList.insert(groceryList.end(), str);
      str = new string ("carrots");
      groceryList.insert(groceryList.end(), str);

      cout << "Number of items on my grocery list: "
	   << groceryList.size() << endl;

      // sort with the overridden function object
      groceryList.sort(greater<string*>());

      // print out the list of strings
      cout << "Items after the predicate sort are:" << endl;
      i = groceryList.begin();
      while (i != groceryList.end())
      {  cout << (*(*i)).c_str() << endl;
      i++;
      }  // end while
   }  // end try
   catch (bad_alloc e)
   {  cout << e.what() << endl;
   }  // end catch
}  // end main
