#include <iostream>
#include "TableB.h"

using namespace std;

void displayKey(TableItemType& anItem)
{
   cout << anItem.getKey() << endl;
}  // end displayKey

int main()
{
   Table   chart;
   KeyType keyItem;

   cin >> keyItem;
   while (!cin.eof()) // ^Z <enter> in Windows, ^D in Unix
   {
      TableItemType anItem(keyItem);
      try
      {  chart.tableInsert(anItem);
      }
      catch (TableException e)
      {  cout << e.what() << endl;
      }  // end try
      cin >> keyItem;
   }  // end while

//   . . .

   chart.traverseTable(displayKey);  // traversal in order
   return 0;
}  // end main
