#include <list>
#include <iostream>
#include <string>
using namespace std;

int main()
{
   list<string> groceryList;  // create an empty list
   list<string>::iterator i = groceryList.begin();

   i = groceryList.insert(i, "apples");
   i = groceryList.insert(i, "bread");
   i = groceryList.insert(i, "juice");
   i = groceryList.insert(i, "carrots");

   cout << "Number of items on my grocery list: "
        << groceryList.size() << endl;

   cout << "Items are:" << endl;
   i = groceryList.begin();
   while (i != groceryList.end())
   {  cout << *i << endl;
      i++;
   }  // end while
}  // end main
