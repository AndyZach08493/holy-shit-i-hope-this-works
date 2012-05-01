#include "List.h"

class SortedList : public List
{
public:
// constructors and destructor:
   SortedList();
   SortedList(const SortedList& sList);
   virtual ~SortedList();

// new operations:
   virtual void sortedInsert(const ListItemType& newItem)
                             throw(ListException);
   virtual void sortedRemove(const ListItemType& anItem)
                             throw(ListException);
   virtual int locatePosition(const ListItemType& anItem,
                              bool& isPresent);
}; // end SortedList
