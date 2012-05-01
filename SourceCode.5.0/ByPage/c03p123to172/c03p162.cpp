#include "ListA.h" // ADT list operations

int main()
{
   List         aList;
   ListItemType dataItem;
   bool         success;

   aList.insert(1, 20, success);
   aList.retrieve(1, dataItem, success);

}
