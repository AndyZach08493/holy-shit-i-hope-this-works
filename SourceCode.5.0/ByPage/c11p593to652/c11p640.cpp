#include <set>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
   // declares three sets
   set<string> checkingAccounts;
   set<string> savingAccounts;
   set<string> bankAccounts;

   // declare a set iterator
   set<string>::const_iterator i;

   // insert customers with checking accounts
   checkingAccounts.insert("Marlow");
   checkingAccounts.insert("Johnson");
   checkingAccounts.insert("Garner");
   checkingAccounts.insert("Smith");

   // print checking account customers
   cout << "Checking accounts: " << endl;
   for (i = checkingAccounts.begin();
        i != checkingAccounts.end(); ++i)
   {
      cout << *i << " ";
   }  // end for
   cout << endl << endl;

   // insert customers with savings accounts
   savingAccounts.insert("Johnson");
   savingAccounts.insert("Abbott");
   savingAccounts.insert("Stricker");
   savingAccounts.insert("Marlow");

   // print saving account customers
   cout << "Savings accounts: " << endl;
   for (i = savingAccounts.begin();
        i != savingAccounts.end(); ++i)
   {
      cout << *i << " ";
   }  // end for
   cout << endl << endl;

   // Union of checking and savings accounts
   // The inserter is an output iterator that inserts elements
   // into a set before printing the set
   //
   set_union(checkingAccounts.begin(), checkingAccounts.end(),
             savingAccounts.begin(), savingAccounts.end(),
             inserter(bankAccounts,bankAccounts.begin()));

   cout << "All bank customers: " << endl;
   for (i = bankAccounts.begin(); i != bankAccounts.end(); ++i)
   {
      cout << *i << " ";
   }  // end for
   cout << endl << endl;

   // Erase all elements of the result set for the next operation
   bankAccounts.erase(bankAccounts.begin(), bankAccounts.end());

   // Intersection of checking and saving accounts
   set_intersection(checkingAccounts.begin(),
                    checkingAccounts.end(),
                    savingAccounts.begin(),savingAccounts.end(),
                    inserter(bankAccounts,bankAccounts.begin()));

   cout << "Customers with checking and savings accounts: "
        << endl;
   for (i = bankAccounts.begin(); i != bankAccounts.end(); ++i)
   {
      cout << *i << " ";
   }  // end for
   cout << endl;

   return 0;
}  // end main
